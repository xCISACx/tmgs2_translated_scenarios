section "h18_m6_000"{
    if (Parameter_GetCh1Param(6, 130) >= 4){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_15F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝!");
        Message_Who(0);
        Message_MsgDisp("主人公", "You came, ｛Amachi＊＊｝.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H1806000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Of course!\nI'm part of the Cheer Squad....\nWhat, are you nervous?\nGeez, this is no good.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H1806000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "If you're the manager, then you have\nto make everyone feel relaxed by\nshowing them your smile, Senpai.");
        Voice_PlayVoice("H1806000_F00600", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... Or something like that.\nYou can't be nervous.\nBe a little more relaxed, okay?");
        Voice_PlayVoice("H1806000_F00700", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "So, I will be cheering from the\nstands!\nDo your best too, Senpai!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I should try my best to\nsupport them!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
