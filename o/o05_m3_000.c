section "o05_m3_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(3, "M3_08F", 0);
        Voice_PlayVoice("Y0503000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "1st place! Wonderful.\nI am proud of you!");
        }
    else if (var0 <= 3){
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(3, "M3_08F", 0);
        Voice_PlayVoice("Y0503000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Disappointing. Another step further.");
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(3, "M3_08F", 0);
        Voice_PlayVoice("Y0503000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "4th place...\nHowever, you did your best.\nGood job.");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
