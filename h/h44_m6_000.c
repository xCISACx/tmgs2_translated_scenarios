section "h44_m6_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_15F", 0);
        if (Parameter_GetCh1Param(6, 130) <= 3){
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nDid you come here to cheer on the\nBaseball Club?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4406000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Of course, I'm in the Cheer Squad!\nEven though it's a practice game,\nit's an important match!");
            Voice_PlayVoice("H4406000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The Cheer Squad will do their best,\nso the cheerleaders should also do\ntheir best!\n... Don't mess up, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        else {
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nDid you come here to cheer on the\nBaseball Club?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4406000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, actually...\nI came here to see you, Senpai.");
            Character_ChFace(0, 4, 0);
            Character_BlinkStart(6, 0, (#1));
            Voice_PlayVoice("H4406000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Just kidding. I was joking!\nI'm in the Cheer Squad, so I'm also\ncheering!");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H4406000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The Cheer Squad will do their best,\nso the cheerleaders should also do\ntheir best!\n... Don't stuff up, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(6, "M6_15F", 0);
        if (Parameter_GetCh1Param(6, 130) <= 3){
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nDid you come here to cheer on the\nTrack and Field Club?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4406000_F00500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Of course, I'm in the Cheer Squad!\nEven though it's practice, it's\nstill important!");
            Voice_PlayVoice("H4406000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The Cheer Squad will do their best,\nso the cheerleaders should also do\ntheir best!\n... Don't mess up, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        else {
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Amachi＊＊｝.\nDid you come here to cheer on the\nTrack and Field Club?");
            Voice_PlayVoice("H4406000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, actually...\nI came here to see you, Senpai.");
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4406000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... Just kidding. I was joking!\nI'm in the Cheer Squad, so I'm also\ncheering!");
            Voice_PlayVoice("H4406000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The Cheer Squad will do their best,\nso the cheerleaders should also do\ntheir best!\n... Don't mess up, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
