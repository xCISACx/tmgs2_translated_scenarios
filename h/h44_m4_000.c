section "h44_m4_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_01F", 0);
        if (Parameter_GetCh1Param(4, 130) <= 3){
            Voice_PlayVoice("H4404000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, ｛Hariya＊＊｝.\nDid you come here to cheer on the\nBaseball Club?");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("H4404000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'm just looking.");
            Message_Who(0);
            Message_MsgDisp("主人公", ".........");
            Character_ChFace(0, 2, 4);
            Voice_PlayVoice("H4404000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'm kidding!\nYou should focus on cheering as\nwell, okay?\nI'll be watching.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        else {
            Voice_PlayVoice("H4404000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, ｛Hariya＊＊｝.\nDid you come here to cheer on the\nBaseball Club?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H4404000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Eh? Ah～. Well...\nI'll cheer for them since they're\nhere...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4404000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Look, it's about to start!\nI'll give my all to cheer, so you\nshould do your best, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, thanks!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(4, "M4_01F", 0);
        if (Parameter_GetCh1Param(4, 130) <= 3){
            Voice_PlayVoice("H4404000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, ｛Hariya＊＊｝.\nDid you come here to cheer on the\nTrack and Field Club?");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("H4404000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, kinda.\nSince I'm here, I was thinking of\nteasing you.");
            Message_Who(0);
            Message_MsgDisp("主人公", ".........");
            Character_ChFace(0, 2, 4);
            Voice_PlayVoice("H4404000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... It's a joke.\nI'll give my all to cheer, so you\nshould do your best, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        else {
            Voice_PlayVoice("H4404000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, ｛Hariya＊＊｝.\nDid you come here to cheer on the\nTrack and Field Club?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H4404000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Eh? Ah～...\nWell, I'm actually here to cheer on\nthe Cheerleading Club.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("H4404000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'm here to cheer on those people\ndoing their best!\nSo you're included as well!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hmm...?\nWell, thanks, ｛Hariya＊＊｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
