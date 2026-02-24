section "o05_m2_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(2, "M2_08F", 0);
        Voice_PlayVoice("Y0502000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "1st place, good.");
        }
    else if (var0 <= 3){
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(2, "M2_08F", 0);
        Voice_PlayVoice("Y0502000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I'm disappointed.");
        }
    else {
        Character_ChFace(0, 0, 8);
        Character_Chara_GS2(2, "M2_08F", 0);
        Voice_PlayVoice("Y0502000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "4th place...");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
