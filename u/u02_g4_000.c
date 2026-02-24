section "u02_g4_000"{
    if (Parameter_GetCh1Param(13, 64) == 0){
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(13, "G4_04F", 0);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("U0213000_M00000", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "It was delicious...\nI wonder if I ate too much?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, most likely. Haha!");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("U0213000_M00100", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "This cafe, right?\nThey sometimes serve very limited\nseasonal parfaits.\nIt's usually unexpected.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(13, 2, (#1));
        Voice_PlayVoice("U0213000_M00200", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "It was good to eat together before\nit ended.");
        Message_Who(0);
        Message_MsgDisp("主人公", "You really looked into this, didn't\nyou, ｛Mizushima＊＊｝?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(13, 3, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("U0213000_M00300", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Really?\nIt's because I'm a glutton when it\ncomes to sweets.\nHaha.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hahaha.");
        }
    else {
        Character_Chara_GS2(13, "G4_04F", 0);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "The parfait was amazing this time.");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(13, 3, (#1));
        Voice_PlayVoice("U0213000_M00400", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Yeah, it was great!\nIf it wasn't the two of us sharing\nthis, I wouldn't be able to eat it\nall by myself.\nIt was a great help.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks for the treat and the invite.\nIt was delicious!");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(13, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("U0213000_M00500", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "You're welcome....\n*Giggles*");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hahaha.");
        Voice_PlayVoice("U0213000_M00600", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "...\nThank you, ｛主人公｝.");
        }
    System_Call_GS2("U03", "G4", 0);
    }
