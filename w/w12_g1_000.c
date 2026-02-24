section "w12_g1_000"{
    if (System_GlobalWork(4, 1) == 15){
        Character_ChFace(0, 0, 8);
        Character_Chara_GS2(10, "G1_04F", 0);
        Voice_PlayVoice("W1210000_J00000", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "You...\nAre you trying to pick a fight with\nme?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(10, 3, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("W1210000_J00100", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Why do you think I came all this way\nto the Amusement Park?\nI am not a kid...");
        Character_Chara_GS2(10, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Toudou＊＊｝ seems angry\nfor some reason...)");
        Parameter_AddCh1Param(10, 60, #2);
        }
    else if (System_GlobalWork(4, 1) == 3){
        Character_Chara_GS2(10, "G1_04F", 0);
        Voice_PlayVoice("W1210000_J00200", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Today was bad compared to any other\nday...");
        Message_Who(0);
        Message_MsgDisp("主人公", "No, not at all!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("W1210000_J00300", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Thanks to you, I was happy, too....\nIn many ways.");
        Character_Chara_GS2(10, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Toudou＊＊｝ was blushing.\nWhat happened to her?)");
        Parameter_AddCh1Param(10, 60, 2);
        }
    else if (System_GlobalWork(4, 1) == 30){
        Character_ChFace(0, 0, 8);
        Character_Chara_GS2(10, "G1_04F", 0);
        Voice_PlayVoice("", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh?");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(10, 3, (#1));
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("W1210000_J00400", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "How can you act like such an\nadolescent to me?\n... Foolish child.");
        Character_Chara_GS2(10, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I guess I took\n｛Toudou＊＊｝ on a ride she\ndidn't like...)");
        Parameter_AddCh1Param(10, 60, #1);
        }
    else {
        Character_Chara_GS2(10, "G1_04F", 0);
        Voice_PlayVoice("W1210000_J00500", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Well, I suppose things like this are\nokay...\nHowever, I did invite you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, it was fun.\nThank you for inviting me today.");
        Parameter_AddCh1Param(10, 60, 1);
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(10, 86, 1);
    }
