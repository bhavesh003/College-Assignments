from pprint import pprint
d = dict(x=list(range(11, 20)), y=list(range(21, 30)), z=list(range(31, 40)))
pprint(d)
print(d["x"][4])
print(d["y"][4])
print(d["z"][4])
for k, v in d.items():
    print(k, "has value", v)
