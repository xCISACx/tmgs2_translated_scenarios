section "w12_g4_000"{
    if (System_GlobalWork(4, 1) == 15){
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(13, "G4_04F", 0);
        Voice_PlayVoice("W1213000_M00000", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Hey, how was today?\nBe honest with me...");
        Message_Who(0);
        Message_MsgDisp("主人公", "... What?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("W1213000_M00100", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "No... It's nothing!\nWell, let's go home, okay?");
        Character_Chara_GS2(13, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Mizushima＊＊｝ seemed a\nlittle lonely...)");
        Parameter_AddCh1Param(13, 60, #2);
        }
    else if (System_GlobalWork(4, 1) == 3){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(13, "G4_04F", 0);
        Voice_PlayVoice("", #1, "W1213000_M00200");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Hey ｛主人公｝, did you\nhave fun today?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yep!");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(13, 2, (#1));
        Voice_PlayVoice("W1213000_M00300", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Hmm... Really?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(13, 3, (#1));
        Voice_PlayVoice("W1213000_M00400", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Meeeee too!\n*Giggles*");
        Character_Chara_GS2(13, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Mizushima＊＊｝ looks very\nhappy.\nI'm glad that I came today!)");
        Parameter_AddCh1Param(13, 60, 2);
        }
    else if (System_GlobalWork(4, 1) == 30){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(13, "G4_04F", 0);
        Voice_PlayVoice("W1213000_M00500", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Was today fun?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yep!");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(13, 3, (#1));
        Voice_PlayVoice("W1213000_M00600", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Hah...\n*Whew*");
        Message_Who(0);
        Message_MsgDisp("主人公", "...?");
        Character_ChFace(0, 0, 0);
        Voice_PlayVoice("W1213000_M00700", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "No, it's nothing!\n*Giggles* Well, shall we head home?");
        Character_Chara_GS2(13, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I wonder what\n｛Mizushima＊＊｝'s sigh was\nabout...)");
        Parameter_AddCh1Param(13, 60, #1);
        }
    else {
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(13, "G4_04F", 0);
        Voice_PlayVoice("W1213000_M00800", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Was today fun?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yep!");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(13, 3, (#1));
        Voice_PlayVoice("W1213000_M00900", #1, "");
        Message_Who(13);
        Message_MsgDisp("Mizushima", "Yeah. Well, good.\nSo, shall we head home?");
        Character_Chara_GS2(13, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Well, that's all for today.)");
        Parameter_AddCh1Param(13, 60, 1);
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(13, 86, 1);
    }
