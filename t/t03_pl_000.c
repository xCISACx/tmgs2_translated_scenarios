section "t03_pl_000"{
    int var0;
    Screen_ClearScreen();
    Background_Bg_GS2("BG_ED020_SP_1", #1, #1, 0);
    Screen_WipeIn(2);
    int var1 = 0;
    int var2 = 0;
    System_Wait(120);
    Message_DispMsg(1);
    Message_Epilog_Init();
    Message_Text_Color(1);
    int var3 = 0;
    Message_Epilog_Text(4, 0);
    var0 = System_GlobalWork(3, 1);
    if ((var0 == 10) || (var0 == 11) || (var0 == 18)){
        System_Call_GS2("T03", "M1", 0);
        }
    else if ((var0 == 20) || (var0 == 21) || (var0 == 28)){
        System_Call_GS2("T03", "M2", 0);
        }
    else if ((var0 == 30) || (var0 == 31) || (var0 == 38)){
        System_Call_GS2("T03", "M3", 0);
        }
    else if ((var0 == 40) || (var0 == 41) || (var0 == 48)){
        System_Call_GS2("T03", "M4", 0);
        }
    else if ((var0 == 50) || (var0 == 51) || (var0 == 58)){
        System_Call_GS2("T03", "M5", 0);
        }
    else if ((var0 == 60) || (var0 == 61) || (var0 == 68)){
        System_Call_GS2("T03", "M6", 0);
        }
    else if ((var0 == 70) || (var0 == 71) || (var0 == 78)){
        System_Call_GS2("T03", "M7", 0);
        }
    else if ((var0 == 80) || (var0 == 81) || (var0 == 88)){
        System_Call_GS2("T03", "M8", 0);
        }
    else if ((var0 == 90) || (var0 == 91)){
        System_Call_GS2("T03", "M9", 0);
        }
    else if ((var0 == 100) || (var0 == 101)){
        System_Call_GS2("T03", "MA", 0);
        }
    else if ((var0 == 110) || (var0 == 111)){
        System_Call_GS2("T03", "MB", 0);
        }
    else if (var0 == 1){
        System_Call_GS2("T03", "G1", 0);
        }
    else if (var0 == 2){
        System_Call_GS2("T03", "G2", 0);
        }
    else if (var0 == 3){
        System_Call_GS2("T03", "G3", 0);
        }
    else if (var0 == 4){
        System_Call_GS2("T03", "G4", 0);
        }
    else if (var0 == 14){
        System_Call_GS2("T03", "S1", 0);
        }
    else if (var0 == 15){
        System_Call_GS2("T03", "S2", 0);
        }
    else if ((var0 == 19) || (var0 == 29) || (var0 == 39) || (var0 == 49) || (var0 == 59) || (var0 == 69) || (var0 == 79) || (var0 == 89)){
        System_Call_GS2("T03", "PL", 1);
        }
    else {
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Clear(1);
        Message_Epilog_Text(1, 1);
        Message_DispMsg(1);
        System_Call_GS2("T03", "PL", 10);
        Message_Epilog_Text(17, 0);
        Message_DispMsg(0);
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　");
        Message_Epilog_Text(7, 1);
        Message_DispMsg(1);
        Message_Who(0);
        Message_MsgDisp("　　　", "My friends and I often talk about\nthe legend.\nI don't know which is true, but one\nday, I will be able to discover my\nown legend...");
        Message_Epilog_Text(16, 1);
        Message_Who(0);
        Message_MsgDisp("　　　", "Surely... in the future.");
        System_GlobalWork(3, 0, 0);
        }
    Message_Epilog_Text(17, 0);
    Message_DispMsg(0);
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　");
    Message_CloseMsg();
    Screen_WipeOut(2);
    System_GlobalWork(3, 0, 0);
    Message_Epilog_Term();
    }
