section "o05_m4_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(4, "M4_08F", 0);
        Voice_PlayVoice("Y0504000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "1st place? Obviously!");
        }
    else if (var0 <= 3){
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(4, "M4_08F", 0);
        Voice_PlayVoice("Y0504000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "How boring!");
        }
    else {
        Character_ChFace(0, 0, 8);
        Character_Chara_GS2(4, "M4_08F", 0);
        Voice_PlayVoice("Y0504000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "4th place, what a joke!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
