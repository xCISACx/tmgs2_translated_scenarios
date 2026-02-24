section "p54_m1_000"{
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(1, "M1_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5401000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Somehow... It's amazing.\nIt feels like it's the real\nHimeko-senpai.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really? I'm glad.");
            Voice_PlayVoice("P5401000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, such a resemblance.\nOnly the Art Club....\nThough, I don't want to display it\nin the shop.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Saeki＊＊｝!)");
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 1);
            Character_Chara_GS2(1, "M1_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5401000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... Is it an abstract?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?\nUmm, it's supposedly a realistic\npicture...");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("P5401000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It's best not to say that to\nHimeko-senpai no matter what\nhappens, okay?\nSo, be careful.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, I should have been a little\nthorough with my painting...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(1, "M1_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5401000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I'm envious, really.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("P5401000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nIt looks like it's trying to tell me\nsomething with a melancholic\nexpression.");
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("P5401000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I never thought to see such a\nprecisely- made sculpture.\nYou're amazing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Saeki＊＊｝!)");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(1, "M1_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5401000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "... A monster?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Umm...\nIt's supposed to be a mermaid...");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P5401000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No, it's a monster, and a weak one.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～!\nI should have tried a little harder\nto make it...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(1, "M1_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5401000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "So amazing... I'm surprised.\nThe Art Club is really is awesome.");
            Message_Who(0);
            Message_MsgDisp("主人公", "See? Everyone did their best.");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5401000_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Seems so...\nIn my opinion, I think that the\nocean feeling is really good.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, I'm in charge of that!");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5401000_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I see. Yeah, I think I understand.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Saeki＊＊｝!)");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(1, "M1_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5401000_A01200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "It's amazing. It's amazing, but...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Hmm?");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5401000_A01300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Seems like over there, how should I\nsay this...\nIt's unfinished...\nOr should I say, it's a mess.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I was in charge of that...");
            Voice_PlayVoice("P5401000_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I-I see...\nWell, that can also be kept as a\nmemory.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, I should have drawn it with\nmore effort...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
