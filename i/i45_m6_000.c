section "i45_m6_000"{
    Background_Bg_GS2("BG_AR400_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(6, "M6_??F", 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Voice_PlayVoice("", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nWhat's up?");
        Voice_PlayVoice("I4506000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "When I just happened to see you\nwhile walking by, Senpai.");
        Character_BlinkStart(6, 3, (#1));
        Voice_PlayVoice("I4506000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Please work hard.");
        }
    else if (Parameter_GetCh1Param(6, 130) == 3){
        Voice_PlayVoice("", 6, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝. Welcome.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(6, 3, (#1));
        Voice_PlayVoice("I4506000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Ah, don't worry about me, I'm just\nwindow shopping.\nI've seen most of it, so I'll be\nleaving.\nLater!");
        }
    else {
        Voice_PlayVoice("", 6, "I4506000_F00300");
        Message_Who(6);
        Message_MsgDisp("Amachi", "｛主人公｝!\nAre you working hard?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝. Welcome!");
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("I4506000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Right, I want a photo frame.\nAre there any good ones?");
        Message_Who(0);
        Message_MsgDisp("主人公", "This one is nice. We just got it.\nDoesn't the wooden frame have a nice\nfeeling to it?");
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(6, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I4506000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Eh, so you can pick the good ones\nout in a flash.\nAren't you good at this, Senpai!");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
