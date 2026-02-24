section "o05_m1_000"{
    int var0 = 0;
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(1, "M1_08F", 0);
        Voice_PlayVoice("Y0501000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "1st place, yeah! Okay, good.");
        }
    else if (var0 <= 3){
        Character_ChFace(0, 0, 8);
        Character_Chara_GS2(1, "M1_08F", 0);
        Voice_PlayVoice("Y0501000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah... Ah, how should I say this...\nYou could have tried harder!");
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_08F", 0);
        Voice_PlayVoice("Y0501000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I blame not having a lot of luck in\nthe pot.\nThe question is the fighting\nspirit....\nJust a little too tired.");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
