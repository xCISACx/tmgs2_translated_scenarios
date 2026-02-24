section "b00_pl_000"{
    int var0;
    Background_Bg_GS2("BG_EX100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Huh?\nWhere were we supposed to meet for\nthe date?)");
    Date_Date_Trable2();
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    var0 = Date_Get_Date_Trable();
    Background_Bg_GS2("ブッキング背景", #1, #1, 0, 0, var0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(He's not here, yet... I'll wait.)");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    Message_Who(0);
    Message_MsgDisp("主人公", "(It's getting late...\nDid I by chance get the meeting\nplace wrong?\nWhat should I do?)");
    Date_Date_Trable3();
    if (var0 != Date_Get_Date_Trable()){
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        var0 = Date_Get_Date_Trable();
        Background_Bg_GS2("ブッキング背景", #1, #1, 0, 0, var0);
        System_GlobalWork(4, 0, 2);
        Screen_WipeIn(2);
        }
    else {
        System_GlobalWork(4, 0, 1);
        }
    if (Date_GetWaitSpot(Date_Get_Date_Trable()) == Date_Date_Data(7)){
        }
    else {
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        var0 = Date_GetWaitSpot(var0);
        if (var0 == 0){
            Background_Bg_GS2("BG_WF000_?_1", 1, #1, 0);
            }
        else if (var0 == 1){
            Background_Bg_GS2("BG_FP000_?_1", 1, #1, 0);
            }
        else if (var0 == 2){
            Background_Bg_GS2("BG_NE000_?_1", 1, #1, 0);
            }
        else if (var0 == 3){
            Background_Bg_GS2("BG_TR000_?_1", 1, #1, 0);
            }
        else if (var0 == 4){
            Background_Bg_GS2("BG_HO000_?_1", 1, #1, 0);
            }
        Message_Who(0);
        Message_MsgDisp("主人公", "(*Sigh*... Time to go home...)");
        System_GlobalWork(7, 0, 1);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        if (System_GlobalWork(2, 1) == 1){
            System_Call_GS2("B09", "M1", 0);
            }
        else if (System_GlobalWork(2, 1) == 2){
            System_Call_GS2("B09", "M2", 0);
            }
        else if (System_GlobalWork(2, 1) == 3){
            System_Call_GS2("B09", "M3", 0);
            }
        else if (System_GlobalWork(2, 1) == 4){
            System_Call_GS2("B09", "M4", 0);
            }
        else if (System_GlobalWork(2, 1) == 5){
            System_Call_GS2("B09", "M5", 0);
            }
        else if (System_GlobalWork(2, 1) == 6){
            System_Call_GS2("B09", "M6", 0);
            }
        else if (System_GlobalWork(2, 1) == 7){
            System_Call_GS2("B09", "M7", 0);
            }
        else if (System_GlobalWork(2, 1) == 8){
            System_Call_GS2("B09", "M8", 0);
            }
        }
    }
