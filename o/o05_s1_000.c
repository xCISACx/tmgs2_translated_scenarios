section "o05_s1_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(14, "S1_04F", 0);
        Voice_PlayVoice("Y0514001_N00100", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "1st place! That's amazing, Sis!");
        }
    else if (var0 <= 3){
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(14, "S1_04F", 0);
        Voice_PlayVoice("Y0514001_N00200", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Ah～. Just a little more.");
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(14, "S1_04F", 0);
        Voice_PlayVoice("Y0514001_N00300", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "4th place.\nYou need much more training.");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(14, 86, 1);
    }
