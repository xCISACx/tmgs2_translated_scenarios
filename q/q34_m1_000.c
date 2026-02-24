section "q34_m1_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(1, "M1_01F", 0);
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(1, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "The field trip will be over\ntomorrow...\nIt went by fast.");
        Voice_PlayVoice("Q1201000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah.\nThat's how things like that are...\nThanks to you though, I quite\nenjoyed it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Really?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("Q1201000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Really. See you at school.");
        }
    else if (Parameter_GetCh1Param(1, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "The field trip will be over\ntomorrow...\nIt went by fast.");
        Voice_PlayVoice("Q1201000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Well. Thanks to you, it was noisy.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Is that so?");
        Character_BlinkStart(1, 3, (#1));
        Voice_PlayVoice("Q1201000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah.... Well, it was fun.\nBut thanks, I owe you.");
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("Q1201000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I didn't expect to have so much fun\nuntil I left....\nThanks.");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "The field trip will be over\ntomorrow...\nIt went by fast.");
        Voice_PlayVoice("Q1201000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah. Hey, I noticed that...");
        Message_Who(0);
        Message_MsgDisp("主人公", "What?");
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("Q1201000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Weren't we together from morning to\nnight like this continuously since\nthe first day?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Now that I think about it, you're\nright...");
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("Q1201000_A00700", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You might not care...\nBut it feels unnatural that we'll be\nseparating soon...");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Saeki＊＊｝...");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(1, 2, (#1));
        Voice_PlayVoice("Q1201000_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "One day...\nLet's come back to Kyoto, again.\nJust the two of us, okay?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(This really became a good memory.)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    Parameter_AddCh1Param(1, 61, 6);
    Parameter_AddCh1Param(1, 60, 4);
    Parameter_AddCh1Param(1, 62, #6);
    }
