section "t03_pl_001"{
    int var0 = System_GlobalWork(3, 1);
    Message_Who(0);
    Message_MsgDisp("　　　", "This is how my three years at high\nschool came to an end.");
    int var1 = 1;
    if (var0 == 19){
        if ((Parameter_GetPl1Param(15) == 1) || (Parameter_GetPl1Param(15) == 21)){
            Message_Who(0);
            Message_MsgDisp("　　　", "After graduation, both\n｛Saeki＊＊｝ and I entered\na 1st rate university.");
            var1 = 0;
            }
        }
    else if (var0 == 29){
        if (Parameter_GetPl1Param(15) == 15){
            Message_Who(0);
            Message_MsgDisp("　　　", "After graduation, both\n｛Shiba＊＊｝ and I entered\na 1st rate Sports university.");
            var1 = 0;
            }
        }
    else if (var0 == 39){
        if ((Parameter_GetPl1Param(15) == 1) || (Parameter_GetPl1Param(15) == 21)){
            Message_Who(0);
            Message_MsgDisp("　　　", "After graduation, both\n｛Hikami＊＊｝ and I entered\na 1st rate university.");
            var1 = 0;
            }
        }
    else if (var0 == 89){
        if (Parameter_GetPl1Param(15) == 2){
            Message_Who(0);
            Message_MsgDisp("　　　", "After graduation, I entered the same\n2nd rate university that\nMasaki-senpai goes to.");
            var1 = 0;
            }
        }
    if (var1 == 1){
        System_Call_GS2("T03", "PL", 10);
        }
    if (var0 == 19){
        System_Call_GS2("T03", "M1", 100);
        }
    else if (var0 == 29){
        System_Call_GS2("T03", "M2", 200);
        }
    else if (var0 == 39){
        System_Call_GS2("T03", "M3", 300);
        }
    else if (var0 == 49){
        System_Call_GS2("T03", "M4", 400);
        }
    else if (var0 == 59){
        System_Call_GS2("T03", "M5", 500);
        }
    else if (var0 == 69){
        System_Call_GS2("T03", "M6", 600);
        }
    else if (var0 == 79){
        System_Call_GS2("T03", "M7", 700);
        }
    else if (var0 == 89){
        System_Call_GS2("T03", "M8", 800);
        }
    System_Call_GS2("T03", "G1", 234);
    System_GlobalWork(3, 0, 0);
    }
