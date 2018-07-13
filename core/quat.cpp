//
//  main.cpp
//  quat
//
//  Created by panyi  on 2018/7/13.
//  Copyright © 2018年 xinlan.com. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

class quat{
public:
    float w , x, y , z;
    
    quat(float _w ,float _x , float _y , float _z):w(_w) , x(_x) ,y(_y) , z(_z){
    }
    quat(const quat& q){
        w = q.w;
        x = q.x;
        y = q.y;
        z = q.z;
    }
    
    quat& operator+(quat& q2){
        w += q2.w;
        x += q2.x;
        y += q2.y;
        z += q2.z;
        return *this;
    }
    
    quat& operator-(quat& q2){
        w -= q2.w;
        x -= q2.x;
        y -= q2.y;
        z -= q2.z;
        return *this;
    }
    
    quat& operator*(quat& q2){
        float w1 = w;
        float x1 = x;
        float y1 = y;
        float z1 = z;
        
        float w2 = q2.w;
        float x2 = q2.x;
        float y2 = q2.y;
        float z2 = q2.z;
        
        w = w1 * w2 - x1 * x2 - y1 * y2 - z1 * z2;
        x = x1 * w2 + w1 * x2 + y1 * z2 - z1 * z2;
        y = y1 * w2 + w1 * y2 + z1 * x2 - x1 * z2;
        z = z1 * w2 + w1 * z2 + x1 * y2 - y1 * x2;
        
        return *this;
    }
    
    //共轭四元数
    quat conju(){
        return quat(w , -x , -y , -z);
    }
    
    float len(){
        return std::sqrt(w * w + x * x + y * y + z * z);
    }
    
    //归一化
    void normalize(){
        float length = len();
        if(length == 0){
            w = x = y = z = 0;
        }else{
            w /= length;
            x /= length;
            y /= length;
            z /= length;
        }
    }
    
    void print(bool vect_mode = false){
        if(vect_mode){
            cout << "<"<< w << " ,"<<x << " ," << y << " ," << z << ">";
        }else{
            cout << w <<"+"<< x <<"i+"<<y << "j+" << z << "k" ;
        }
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    quat q1(1,2,3,4);
    q1.print();
    cout << endl;
    q1.print(true);
    cout << endl;
    
    quat q2(4,3,2,1);
    q1+q2;
    q1.print();
    cout << endl;
    
    quat q3(1,2,3,4);
    quat q4(1,2,3,4);
    q4 - q3;
    q4.print(true);
    cout << endl;
    q3.print(true);
    cout << endl;
    
    cout << "q1 len = " << q1.len() << endl;
    cout << "q2 len = " << q2.len() << endl;
    
    q1.normalize();
    q1.print();
    cout << endl;
    
    quat q5 = q1.conju();
    q5.print();
    cout << endl;
    
    quat q6 = q1 * q2;
    q6.print();
    cout << endl;
    
    return 0;
}
