section "o03_g3_000"{
    int var0 = 0;
    Background_Bg_GS2("BG_SC421_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    var0 = Parameter_GetPl1Param(40);
    if (var0 == 1){
        if (Parameter_GetCh1Param(12, 130) < 3){
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(12, "G3_08F", 0);
            Voice_PlayVoice("O0312000_L00400", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "We did it! 1st place!\nWe were in perfect harmony!\nI'm glad～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(We did it!\nIt was worth doing my best!)");
            }
        else if (Parameter_GetCh1Param(12, 130) >= 3){
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(12, 3, (#1));
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(12, "G3_08F", 0);
            Voice_PlayVoice("O0312000_L00500", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "It was great that we ruled it\ntogether!\nAh～, it feels so great～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(It was great to do my best!)");
            }
        }
    else if (var0 == 2){
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(12, "G3_08F", 0);
        if (Parameter_GetCh1Param(12, 130) < 3){
            Voice_PlayVoice("O0312000_L00600", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I see, 2nd place～! Hmm～... Almost!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(How disappointing...\nWe were so close.)");
            }
        else if (Parameter_GetCh1Param(12, 130) >= 3){
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("O0312000_L00700", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "That was close...\nWe were almost there.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(That's true... How disappointing!)");
            }
        }
    else if (var0 == 3){
        Character_ChFace(0, 2, 2);
        Character_Chara_GS2(12, "G3_08F", 0);
        if (Parameter_GetCh1Param(12, 130) < 3){
            Voice_PlayVoice("O0312000_L00800", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Being 3rd is so half-done.\nIt's questionable.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh* Maybe it was meant to be\nlike this.)");
            }
        else if (Parameter_GetCh1Param(12, 130) >= 3){
            Voice_PlayVoice("O0312000_L00900", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "I see, 3rd place...\nHmm, but I don't think I'm\nsatisfied.\nAre you?\nMaybe we should ask for another go?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*.\nMaybe it was meant to be like this.)");
            }
        }
    else {
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(12, 3, (#1));
        Character_Chara_GS2(12, "G3_08F", 0);
        if (Parameter_GetCh1Param(12, 130) < 3){
            Voice_PlayVoice("O0312000_L01000", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Last～!? That's not good! *Sigh*...\nSo shocking...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh* That didn't turned out\nwell.)");
            }
        else if (Parameter_GetCh1Param(12, 130) >= 3){
            Voice_PlayVoice("O0312000_L01100", #1, "");
            Message_Who(12);
            Message_MsgDisp("Nishimoto", "Being last does make you\ndepressed...\nDo you know what went wrong?\nLet's do a complaint meeting!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh* That didn't turned out\nwell.)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(12, 86, 1);
    }
