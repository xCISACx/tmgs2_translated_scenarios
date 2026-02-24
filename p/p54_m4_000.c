section "p54_m4_000"{
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(4, "M4_17F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5404000_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ooh～.........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Well?");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 0);
            Character_ChFace(0, 7, 0);
            Voice_PlayVoice("P5404000_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "How should I put this?\nThe painting is giving out a strong\nvibe.\nOr rather, I can't express it...");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5404000_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You're really awesome.\nYou do have the talent.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Hariya＊＊｝!)");
            }
        else {
            Character_BlinkStart(4, 2, (#1));
            Character_Chara_GS2(4, "M4_17F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5404000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ooh～.........");
            Message_Who(0);
            Message_MsgDisp("主人公", "Well?");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5404000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "How should I put this?\nThe painting is giving out a strong\nvibe.\nOr rather, I can't express it...");
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(4, 2, (#1));
            Voice_PlayVoice("P5404000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "This is seriously wrong, right?\nOr better yet, are you really an Art\nClub member?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uuggh!\nI should have taken the club\nactivities more seriously...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Character_ChFace(0, 0, 11);
            Character_Chara_GS2(4, "M4_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("P5404000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "This is...!");
            Message_Who(0);
            Message_MsgDisp("主人公", "How is it?");
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5404000_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "What happened to your hands that\nmade you create such awesome\nartwork?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P5404000_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "There's nothing out of the ordinary,\neven though you got chubby\nfingers...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Hariya＊＊｝!)");
            }
        else {
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(4, "M4_01F", 0);
            Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Hariya＊＊｝, umm...");
            Voice_PlayVoice("P5404000_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... What a waste of time.");
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("P5404000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "The Art Club members have lost it!\nAnd so have you!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have taken the club\nactivities more seriously...)");
            }
        }
    else {
        Character_ChFace(0, 0, 11);
        Character_Chara_GS2(4, "M4_01F", 0);
        Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_bunka_jyu(0) == 1){
            Voice_PlayVoice("P5404000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "......");
            Message_Who(0);
            Message_MsgDisp("主人公", "Well?");
            Character_ChFace(0, 7, 0);
            Voice_PlayVoice("P5404000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Terrific～... I'm touched deeply...\nIs it the power of the painting?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P5404000_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You really did well!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Hariya＊＊｝!)");
            }
        else {
            Voice_PlayVoice("P5404000_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "......");
            Message_Who(0);
            Message_MsgDisp("主人公", "Well?");
            Character_ChFace(0, 7, 0);
            Voice_PlayVoice("P5404000_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Great～...");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* Hane academy's number one\nsuccessor, right?");
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P5404000_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "There lies a difficult part.\nIn all of the completion, that area\nis weak.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5404000_D01700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hane academy's number one successor\nat cutting corners!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... It's the painting I made...\nI should have done the activity more\nseriously...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
