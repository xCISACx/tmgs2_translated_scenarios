section "o05_m6_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(6, "M6_08F", 0);
        Voice_PlayVoice("Y0506000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "1st place, congratulations!");
        }
    else if (var0 <= 3){
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(6, "M6_08F", 0);
        Voice_PlayVoice("Y0506000_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Just a little more...");
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_08F", 0);
        Voice_PlayVoice("Y0506000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "4th place... However, good job!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
