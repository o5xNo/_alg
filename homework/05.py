import threading

def halt(func, input, timeout=3):
    def wrapper():
        try:
            func(input)
        except Exception as e:
            print(f"Error {e}")
    
    thread = threading.Thread(target=wrapper)
    thread.start()
    thread.join(timeout)#等待指定的時間後結束

    if thread.is_alive():#如果線程還在運行，超過時間
        print("OVER TIME!!")
        return False
    return True

def f1(n):#n^2
    print(n*n)

def f2(n):#n^4
    s=0
    for i in range(n):
        for j in range(n):
            for k in range(n):
                for l in range(n):
                    s+=1
    print(s)

if __name__ == '__main__':
    print('halt(f1,3)=',halt(f1,3))
    print('halt(f2,10)=',halt(f2,10))
    print('halt(f2,1000)=',halt(f2,1000))
