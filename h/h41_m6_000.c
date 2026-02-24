section "h41_m6_000"{
    if (Parameter_GetCh1Param(6, 514) == 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_15F", 0);
        Background_Bg_GS2("BG_SC420_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I've decided to join the\nCheerleading Club.\nI look forward to it.");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4106000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is that so?\nI am a part of the Cheer Squad, so I\nwill be your team mate.");
            Voice_PlayVoice("H4106000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I look forward to working with you\nfrom now on!");
            }
        else if (Parameter_GetCh1Param(6, 130) == 3){
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I've decided to join the\nCheerleading Club.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4106000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Eh? Really? I'm in the Cheer Squad.\nThat makes us team mates!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I look forward to it.");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4106000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm just saying that in this at\nleast, I have seniority!\nSo you gotta listen to what I say!");
            }
        else {
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I've decided to join the\nCheerleading Club.\nI look forward to it.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4106000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Eh? Really?\nThen we'll be doing the same club\nactivities, because I'm in the Cheer\nSquad!");
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H4106000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm enthusiastic now!\nI hadn't even dreamt about being\nable to cheer with you, Senpai!");
            Character_BlinkStart(6, 0, (#1));
            Voice_PlayVoice("H4106000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Let's do our best together!\nI look forward to it!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, me too!");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4106000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I'm just saying that in this at\nleast, I have seniority.\nYou can come to me for advice.");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
