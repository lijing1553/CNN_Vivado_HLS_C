import struct

p=open("F:\\Downloads\\t10k-images.idx3-ubyte", "rb")
q=open("F:\\Downloads\\t10k-labels.idx1-ubyte", "rb")
r=open("F:\\Downloads\\train-labels-idx1-ubyte\\inputd2", "wb+")
str=p.read(16)
q.read(8)
r.write(str)
for i in range(10000):
    for j in range(28):
        for k in range(28):
            #if k < 2 or k>29 or j < 2 or j>29:
            #    str=0
            #    c=struct.pack('B',str)
            #    r.write(c)
            #else:
            r.write(p.read(1))
    r.write(q.read(1))
