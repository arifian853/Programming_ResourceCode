data = [
	["Sunny","hot","high","false","no"],
	["Sunny","hot","high","true","no"],
	["Overcast","hot","high","false","yes"],
	["rainy","mild","high","false","yes"],
	["rainy","cool","normal","false","yes"],
	["rainy","cool","normal","true","no"],
	["Overcast","cool","normal","true","yes"],
	["Sunny","mild","high","false","no"],
	["Sunny","cool","normal","false","yes"],
	["rainy","mild","normal","false","yes"],
	["Sunny","mild","normal","true","yes"],
	["Overcast","mild","high","true","yes"],
	["Overcast","hot","normal","false","yes"],
	["rainy","mild","high","true","no"]
	]

yes = 0
no = 0
for i in data:
    if(i[4]=="yes"):
        yes = yes + 1
    if(i[4]=="no"):
        no = no + 1
p_yes = yes/len(data)
p_no = no/len(data)
print(p_yes)
print(p_no)

outlook = [
    [0.0,0.0,0.0], #sunny
    [0.0,0.0,0.0], #Overcast
    [0.0,0.0,0.0]  #Rainy
    ]

sunny_yes = 0
sunny_no = 0
sunny_total = 0
for i in data:
    if(i[0]=="Sunny" and i[4]=="yes"):
        sunny_yes = sunny_yes + 1
    if(i[0]=="Sunny" and i[4]=="no"):
        sunny_no = sunny_no + 1
    if(i[0]=="Sunny"):
        sunny_total = sunny_total + 1

print("sunny yes", sunny_yes)
print("sunny no", sunny_no)

overcast_yes = 0
overcast_no = 0
overcast_total = 0
for i in data:
    if(i[0]=="Overcast" and i[4]=="yes"):
        overcast_yes = overcast_yes + 1
    if(i[0]=="Overcast" and i[4]=="no"):
        overcast_no = overcast_no + 1
    if(i[0]=="Overcast"):
        overcast_total = overcast_total + 1

rainy_yes = 0
rainy_no = 0
rainy_total = 0
for i in data:
    if(i[0]=="rainy" and i[4]=="yes"):
        rainy_yes = rainy_yes + 1
    if(i[0]=="rainy" and i[4]=="no"):
        rainy_no = rainy_no + 1
    if(i[0]=="rainy"):
        rainy_total = rainy_total + 1

outlook[0][0] = sunny_yes/yes
outlook[0][1] = sunny_no/no
outlook[0][2] = sunny_total

outlook[1][0] = overcast_yes/yes
outlook[1][1] = overcast_no/no
outlook[1][2] = overcast_total

outlook[2][0] = rainy_yes/yes
outlook[2][1] = rainy_no/no
outlook[2][2] = rainy_total

print(outlook)

temperature = [
    [0.0,0.0,0.0],
    [0.0,0.0,0.0],
    [0.0,0.0,0.0]
    ]

hot_yes = 0
hot_no = 0
for i in data:
    if(i[1]=="hot" and i[4]=="yes"):
        hot_yes = hot_yes + 1
    if(i[1]=="hot" and i[4]=="no"):
        hot_no = hot_no + 1

print("hot yes", hot_yes)
print("hot no", hot_no)
hot_total = hot_yes + hot_no

mild_yes = 0
mild_no = 0
for i in data:
    if(i[1]=="mild" and i[4]=="yes"):
        mild_yes = mild_yes + 1
    if(i[1]=="mild" and i[4]=="no"):
        mild_no = mild_no + 1

mild_total = mild_yes + mild_no

cool_yes = 0
cool_no = 0
for i in data:
    if(i[1]=="cool" and i[4]=="yes"):
        cool_yes = cool_yes + 1
    if(i[1]=="cool" and i[4]=="no"):
        cool_no = cool_no + 1

cool_total = cool_yes + cool_no

temperature[0][0] = hot_yes/yes
temperature[0][1] = hot_no/no
temperature[0][2] = hot_total

temperature[1][0] = mild_yes/yes
temperature[1][1] = mild_no/no
temperature[1][2] = mild_total

temperature[2][0] = cool_yes/yes
temperature[2][1] = cool_no/no
temperature[2][2] = cool_total

print(temperature)
    
humidity = [
    [0.0,0.0,0.0],
    [0.0,0.0,0.0]
    ]

high_yes = 0
high_no = 0
for i in data:
    if(i[2]=="high" and i[4]=="yes"):
        high_yes = high_yes + 1
    if(i[2]=="high" and i[4]=="no"):
        high_no = high_no + 1

print("high yes", high_yes)
print("high no", high_no)
high_total = high_yes + high_no

normal_yes = 0
normal_no = 0
for i in data:
    if(i[2]=="normal" and i[4]=="yes"):
        normal_yes = normal_yes + 1
    if(i[2]=="normal" and i[4]=="no"):
        normal_no = normal_no + 1

normal_total = normal_yes + normal_no

humidity[0][0] = high_yes/yes
humidity[0][1] = high_no/no
humidity[0][2] = high_total

humidity[1][0] = normal_yes/yes
humidity[1][1] = normal_no/no
humidity[1][2] = normal_total

print(humidity)
    
wind = [
    [0.0,0.0,0.0],
    [0.0,0.0,0.0]
    ]

false_yes = 0
false_no = 0
for i in data:
    if(i[3]=="false" and i[4]=="yes"):
        false_yes = false_yes + 1
    if(i[3]=="false" and i[4]=="no"):
        false_no = false_no + 1

print("false yes", false_yes)
print("false no", false_no)
false_total = false_yes+false_no

true_yes = 0
true_no = 0
for i in data:
    if(i[3]=="true" and i[4]=="yes"):
        true_yes = true_yes + 1
    if(i[3]=="true" and i[4]=="no"):
        true_no = true_no + 1

true_total = true_yes+true_no

wind[0][0] = false_yes/yes
wind[0][1] = false_no/no
wind[0][2] = false_total

wind[1][0] = true_yes/yes
wind[1][1] = true_no/no
wind[1][2] = true_total

print(wind)

ulangi=True

while(ulangi):

    in_outlook = int(input("Keadaan outlook\n 1.Sunny\n 2.Overcast\n 3.Rainy\nPilihan:"))-1
    in_temperature = int(input("Keadaan temperature\n 1.Hot\n 2.Mild\n 3.Cool\n Pilihan:"))-1
    in_humidity = int(input("Keadaan humidity\n 1.High\n 2.Normal\n Pilihan:"))-1
    in_wind = int(input("Keadaan wind\n 1.False\n 2.True\n Pilihan:"))-1
 

    P_P_yes = outlook[in_outlook][0]*temperature[in_temperature][0]*humidity[in_humidity][0]*wind[in_wind][0]*p_yes

    P_P_no = outlook[in_outlook][1]*temperature[in_temperature][1]*humidity[in_humidity][1]*wind[in_wind][1]*p_no

    P_X = (outlook[in_outlook][2]/len(data))*(temperature[in_temperature][2]/len(data))*(humidity[in_humidity][2]/len(data))*(wind[in_wind][2]/len(data))

    print("P Play Yes", P_P_yes)
    print("P Play No ", P_P_no)
    print("P(X)", P_X)

    P_yes = P_P_yes/P_X
    P_no = P_P_no/P_X

    print("Play Yes", P_yes)
    print("Play_no", P_no)
    
    a = int(input("Apakah ingin prediksi lagi?\n 1.Tidak\n 2.Ya\n Pilihan:"))
    if(a==1):
        ulangi = False