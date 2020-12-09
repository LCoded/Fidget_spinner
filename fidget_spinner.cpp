#include<simplecpp>
main_program{
    initCanvas("Fidget spinner",1000,700);
    Text name(900,600,"L-ektron");
    while(true){
            Text t000(200,60,"FIDGET SPINNER");
            Rectangle r0(200,60,150,50);
            r0.setColor(COLOR("red"));
            Text t00(200,100,"Hi !");
            Text t01(200,120,"1) Click anywhere to place the fidget spinner.");
            Text t02(200,140,"2)   To spin, first click on the red rectangle     ");
            Text t03(200,160,"   and then click anywhere on the screen.");
            Text t04(200,180,"Enjoy  !");
            int click= getClick();
            int x= click/65536, y= click%65536;
            float pi=3.14;
            Rectangle r1(x,y-80,40,150);
                r1.setColor(COLOR("red"));
                r1.setFill(true);
            Rectangle r2(x,y-80,40,150);
                r2.setColor(COLOR("blue"));
                r2.setFill(true);
                    r2.rotate(-2*pi/3);
                    r2.moveTo(x+(-80)*sin(2*pi/3), y+ (-80)*cos(2*pi/3));
            Rectangle r3(x,y-80,40,150);
                r3.setColor(COLOR("green"));
                r3.setFill(true);
                    r3.rotate(2*pi/3);
                    r3.moveTo(x+(-80)*sin(-2*pi/3), y+ (-80)*cos(-2*pi/3));


            int r1x= r1.getX(), r1y= r1.getY(), r2x= r2.getX(), r2y= r2.getY(), r3x= r3.getX(), r3y= r3.getY();

            Circle c1(x,y,50);
            c1.setColor(COLOR("yellow"));
            c1.setFill(true);

            int click1= getClick();
            int x1= click1/65536, y1 = click1%65536;
                Circle ripple1(x1,y1,20);

                for(int i=10; i>1; i--){
                    ripple1.scale(i/10.0);
                    wait(0.01);
                }

            int click2= getClick();
            int x2= click2/65536, y2= click%65536;


            float theta = atan((x2-x1)/(y1-y))*0.9;

            repeat(150){
                r1.rotate(-theta);
                r1.moveTo(x+(r1x-x)*cos(theta)+(r1y-y)*sin(theta), y+ (r1y-y)*cos(theta)-(r1x-x)*sin(theta));
                r1x= r1.getX();
                r1y= r1.getY();

                 r2.rotate(-theta);
                r2.moveTo(x+(r2x-x)*cos(theta)+(r2y-y)*sin(theta), y+ (r2y-y)*cos(theta)-(r2x-x)*sin(theta));
                r2x= r2.getX();
                r2y= r2.getY();

                r3.rotate(-theta);
                r3.moveTo(x+(r3x-x)*cos(theta)+(r3y-y)*sin(theta), y+ (r3y-y)*cos(theta)-(r3x-x)*sin(theta));
                r3x= r3.getX();
                r3y= r3.getY();

                theta = theta*0.985;

            }
        t00.move(10000,10000),t01.move(10000,10000),t02.move(10000,10000),t03.move(10000,10000),t04.move(10000,10000),t000.move(10000,10000),r0.move(10000,10000);
        Rectangle r4(800,100,100,50);
        Text t1(800,100,"PLAY AGAIN");
        Text t2(100,100,"Click anywhere to exit.");
        int click3= getClick();
        int x3 = click3/65536, y3= click3%65536;
        if (x3>=750&&x3<=850&&y3>=75&&y3<=125){
            continue;
        }
        else
            break;
    }


}
