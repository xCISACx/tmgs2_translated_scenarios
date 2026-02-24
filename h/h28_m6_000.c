section "h28_m6_000"{
    if (Parameter_GetCh1Param(6, 130) >= 4){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(6, "M6_15F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 6, "H2806000_F00400");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.\nIsn't it amazing that you're in the\nInter High School Championships!?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nYou came here to support us.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H2806000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Of course!\nI'm in the Cheer Squad, aren't I?\nWhat's gonna happen if I don't come\nhere to cheer for you?");
        Character_ChFace(0, 0, 8);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H2806000_F00600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Leave the cheering to me! ... Huh?\nAre you nervous?\nYou can't be nervous!");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(6, 2, (#1));
        Voice_PlayVoice("H2806000_F00700", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "You have to smile like you usually\ndo....\nYou'll be fine if you play how you\nusually play.");
        Character_BlinkStart(6, 2, (#1));
        Voice_PlayVoice("H2806000_F00800", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Now, it's about time I went.\nI'm expecting to see your fine\nplaying.\nGood luck!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
