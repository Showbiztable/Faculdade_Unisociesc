from numpy import max
from math import sin, cos, pi

class fuzzyControl(object):
    def __init__(self):
        return

    def control(self, mdl):
        state = mdl.getState()
        position = state[0] # Tem que implementar estes status
        inclination = state[1]
        linear_vel = state[2] # Tem que implementar estes status
        angular_vel = state[3]


    # -------------------------------------------------------------
    # Velocidade Linear do carro
    # -------------------------------------------------------------
    # Negative membership determination for linear velocity
        if linear_vel <= -3:
         negative_xd = 1
        elif -3 < linear_vel < 0:
         negative_xd = -(1/3) * linear_vel
        else:
         negative_xd = 0

    # Zero membership determination for linear velocity
        if -1.5 < linear_vel < -0.5:
            zero_xd = (100/12) * linear_vel + 15/12
        elif -0.5 <= linear_vel <= 0.5:
            zero_xd = 1
        elif 0.5 < linear_vel < 1.5:
            zero_xd = -(100/12) * linear_vel + 15/12
        else:
            zero_xd = 0

    # Positive membership determination for angular velocity
        if linear_vel <= 0:
            positive_xd = 0
        elif 0 < linear_vel < 3:
            positive_xd = (1/3) * linear_vel
        else:
            positive_xd = 1

    # -------------------------------------------------------------
    # Position do carro         x--> posicao do carro       y --> valor do y no gráfico
    # -------------------------------------------------------------
    # Negative membership determination for position
        if position <= -2:
            negative_x = 1
        elif -2 < position < 0:
            negative_x = -0.5 * position
        else:
            negative_x = 0

    # Zero membership determination for position
        if -1.5 < position < -0.5:
            zero_x = (100/7) * position + 10/7      # Arrumar esta conta
        elif -0.5 <= position <= 0.5:
            zero_x = 1
        elif 0.5 < position < 1.5:
            zero_x = -(100 / 7) * position + 10 / 7     # Arrumar esta conta
        else:
            zero_x = 0

    # Positive membership determination for position
        if position <= 0:
            positive_x = 0
        elif 0 < position < 2:
            positive_x = 0.5 * position
        else:
            positive_x = 1

    # -------------------------------------------------------------
    # Inclination
    # -------------------------------------------------------------
    # Negative membership determination for inclination
        if inclination <= -0.1:
            negative_th = 1
        elif -0.1 < inclination < 0:
            negative_th = -10 * inclination
        else:
            negative_th = 0

    # Zero membership determination for inclination
        if -0.1 < inclination < -0.03:
            zero_th = (100/7) * inclination + 10/7
        elif -0.03 <= inclination <= 0.03:
            zero_th = 1
        elif 0.03 < inclination < 0.1:
            zero_th = -(100 / 7) * inclination + 10 / 7
        else:
            zero_th = 0

    # Positive membership determination for inclination
        if inclination <= 0:
            positive_th = 0
        elif 0 < inclination < 0.1:
            positive_th = 10 * inclination
        else:
            positive_th = 1

    # -------------------------------------------------------------
    # Angular Velocity
    # -------------------------------------------------------------
    # Negative membership determination for angluar velocity
        if angular_vel <= -0.1:
            negative_thd = 1
        elif -0.1 < angular_vel < 0:
            negative_thd = -10 * angular_vel
        else:
            negative_thd = 0

    # Zero membership determination for angluar velocity
        if -0.15 < angular_vel < -0.03:
            zero_thd = (100/12) * angular_vel + 15/12
        elif -0.03 <= angular_vel <= 0.03:
            zero_thd = 1
        elif 0.03 < angular_vel < 0.15:
            zero_thd = -(100/12) * angular_vel + 15/12
        else:
            zero_thd = 0

    # Positive membership determination for angular velocity
        if angular_vel <= 0:
            positive_thd = 0
        elif 0 < angular_vel < 0.1:
            positive_thd = 10 * angular_vel
        else:
            positive_thd = 1

        NL_p = [0]
        NM_p = [0]
        NS_p = [0]
        Z_p = [0]
        PS_p = [0]
        PM_p =[0]
        PL_p = [0]

        NL_c = [0]
        NM_c = [0]
        NS_c = [0]
        Z_c = [0]
        PS_c = [0]
        PM_c = [0]
        PL_c = [0]
    # -------------------------------------------------------------
    # Output membership determination - pendulum rules
    # -------------------------------------------------------------
    # Pendulum rule # 1
        NL_p.append(min(negative_th, negative_thd))
    # Pendulum rule # 2
        NM_p.append(min(negative_th, zero_thd))
    # Pendulum rule # 3
        Z_p.append(min(negative_th, positive_thd))
    # Pendulum rule # 4
        NS_p.append(min(zero_th, negative_thd))
    # Pendulum rule # 5
        Z_p.append(min(zero_th, zero_thd))
    # Pendulum rule # 6
        PS_p.append(min(zero_th, positive_thd))
    # Pendulum rule # 7
        Z_p.append(min(positive_th, negative_thd))
    # Pendulum rule # 8
        PM_p.append(min(positive_th, zero_thd))
    # Pendulum rule # 9
        PL_p.append(min(positive_th, positive_thd))

    # -------------------------------------------------------------
    # Output membership determination - car rules
    # -------------------------------------------------------------
    # Pendulum rule # 1
        NL_c.append(min(negative_x, negative_xd))
    # Pendulum rule # 2
        NM_c.append(min(negative_x, zero_xd))
    # Pendulum rule # 3
        Z_c.append(min(negative_x, positive_xd))
    # Pendulum rule # 4
        NS_c.append(min(zero_x, negative_xd))
    # Pendulum rule # 5
        Z_c.append(min(zero_x, zero_xd))
    # Pendulum rule # 6
        PS_c.append(min(zero_x, positive_xd))
    # Pendulum rule # 7
        Z_c.append(min(positive_x, negative_xd))
    # Pendulum rule # 8
        PM_c.append(min(positive_x, zero_xd))
    # Pendulum rule # 9
        PL_c.append(min(positive_x, positive_xd))


    # Determination of the force applied to the car
        num_p_pendulo = max(NL_p)*-100 + max(NM_p)*-40 + max(NS_p)*-5 + max(Z_p)*0 + max(PS_p)*5 + max(PM_p)*40 + max(PL_p)*100
        den_p_pendulo = max(NL_p)+max(NM_p)+max(NS_p)+max(Z_p)+max(PS_p)+max(PM_p)+max(PL_p)

        num_p_carro = max(NL_c) * -50 + max(NM_c) * -5 + max(NS_c) * -1 + max(Z_c) * 0 + max(PS_c) * 1 + max(PM_c) * 5 + max(PL_c) * 50
        den_p_carro = max(NL_c) + max(NM_c) + max(NS_c) + max(Z_c) + max(PS_c) + max(PM_c) + max(PL_c)

        num_p = num_p_pendulo/den_p_pendulo
        den_p = num_p_carro/den_p_carro

        #num_p = num_p_pendulo + den_p_pendulo
        #den_p = num_p_carro + den_p_carro

        return num_p+den_p # arrumar este cara