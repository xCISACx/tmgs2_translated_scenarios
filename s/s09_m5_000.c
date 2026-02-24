section "s09_m5_000"{
    int var0;
    if (Parameter_GetCh1Param(5, 130) <= 2){
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(5, 2, (#1));
        Character_Chara_GS2(5, "M5_??F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("S0905000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Oh, fortunes. Should we draw?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm, should I?");
        Message_MsgSel("Okay, let's draw!", "Hmm, I'd rather not.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S0905000_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Oh, we're drawing huh?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, ｛Chris＊＊｝, too?");
            Voice_PlayVoice("S0905000_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Of course! This is exciting.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I hope I get good results...!)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("S0905000_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Wha～!? ...... What～....");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Maybe I should have drawn, after\nall?)");
            var0 = 1;
            break ;
            }
        }
    else if (Parameter_GetCh1Param(5, 130) == 3){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(5, "M5_??F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("S0905000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Oh, fortunes.\nHey, would you like to pull one?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm, should I?");
        Message_MsgSel("Okay, let's draw!", "Hmm, I'd rather not.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0905000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm not sure if you only get one\nchance to draw.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, of course.");
            Voice_PlayVoice("S0905000_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Then we should put a lot of thought\ninto this.");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("S0905000_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm going to pray for good fortune～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I-I feel kinda nervous...)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("S0905000_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Huh... for real?\nThis is one of the Japanese\ntraditions, right?\nAre you sure?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Maybe I should have drawn, after\nall?)");
            var0 = 1;
            break ;
            }
        }
    else {
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Character_Chara_GS2(5, "M5_??F", 0);
        Background_Bg_GS2("BG_EX142_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, fortunes.");
        Voice_PlayVoice("S0905000_E00900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hmm? Shall we draw?");
        Message_MsgSel("Yeah, let's draw!", "Hmm, I'd rather not.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("S0905000_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's like you're entrusting your\nfate, sounds interesting...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("S0905000_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hmm? Oh, I'll take the chance.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He looked serious for a moment, but\nI wonder if it was a joke...)");
            var0 = 0;
            break ;
            case 1:
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("S0905000_E01200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "... I guess.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Did you want to pull one?");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("S0905000_E01300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's fine.\nWe don't even know what the results\nare going to be.\nLet's go, let's go!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Chris＊＊｝...?)");
            var0 = 1;
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    switch (var0){
        case 0:
        System_Call_GS2("S10", "PL", 0);
        System_Call_GS2("S11", "M5", 0);
        break ;
        case 1:
        break ;
        }
    System_Call_GS2("S12", "M5", 0);
    }
