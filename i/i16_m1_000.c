section "i16_m1_000"{
    Background_Bg_GS2("BG_AR100_CW_2", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetByParam(1, 52) <= 59){
        if (Parameter_GetCh1Param(1, 130) <= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "Please prepare the special blend,\nlemon tea, and one rare cheesecake\nfor table 3!");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(16, "S3_17F", 0);
            Music_PlayBGM(0, "MN_C_16_000_D00");
            Voice_PlayVoice("I1601000_P00000", #1, "");
            Message_Who(16);
            Message_MsgDisp("Master", "Yes. Huh?\nDo we still have any rare\ncheesecakes left...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes. We have two remaining.");
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(1, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("I1601000_P00100", #1, "");
            Message_Who(16);
            Message_MsgDisp("Master", "I see.\nYou're a real help, young lady.\nPlease continue to work hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was complimented by Master!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "Please prepare the special blend,\nlemon tea, and one rare cheesecake\nfor table 3!");
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Character_Chara_GS2(16, "S3_17F", 0);
            Music_PlayBGM(0, "MN_C_16_000_D00");
            Voice_PlayVoice("I1601000_P00200", #1, "");
            Message_Who(16);
            Message_MsgDisp("Master", "Yes. Huh?\nDo we still have any rare\ncheesecakes left...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes. We have two remaining.");
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("I1601000_P00300", #1, "");
            Message_Who(16);
            Message_MsgDisp("Master", "I see....\nYou're a real help, young lady.\nRight, Teru?");
            Message_CloseMsg();
            Character_ChMove(16, 1);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(1, "M1_13F", 0);
            Voice_PlayVoice("I1601000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well, yeah....\nAnyway, please make one drip coffee,\nMaster.");
            Character_BlinkStart(1, 3, (#1));
            Voice_PlayVoice("I1601000_P00500", #1, "");
            Message_WindowPosition(1);
            Message_Who(16);
            Message_MsgDisp("Master", "Yes.");
            Message_WindowPosition(0);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Haha, I was complimented by\n｛Saeki＊＊｝!)");
            }
        Parameter_AddCh1Param(1, 61, 5);
        Parameter_AddCh1Param(1, 60, 5);
        Parameter_AddCh1Param(1, 62, #5);
        }
    else if ((Parameter_GetByParam(1, 52) >= 60) && (Parameter_GetByParam(1, 52) <= 89)){
        if (Parameter_GetCh1Param(1, 130) <= 3){
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(16, "S3_17F", 0);
            Music_PlayBGM(0, "MN_C_16_000_D00");
            Voice_PlayVoice("I1601000_P00600", #1, "");
            Message_Who(16);
            Message_MsgDisp("Master", "Didn't table 2 order that blend\nbefore table 3?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh no! ... You're right.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("I1601000_P00700", #1, "");
            Message_Who(16);
            Message_MsgDisp("Master", "Dear, oh dear...\nThen I'll just make one more blend,\nquickly.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I'm sorry.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(... I have to pay more attention.)");
            }
        else {
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(1, "M1_13F", 0);
            Music_PlayBGM(0, "MN_C_01_004_D00");
            Voice_PlayVoice("", 1, "I1601000_A00800");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.\nDidn't the female customers at table\n2 order the blend that you just sent\nto table 3 first?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh no! ... I think so.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(1, 3, (#1));
            Voice_PlayVoice("I1601000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I thought that was the reason why\nthey're looking over here with such\nscary faces.");
            Message_Who(0);
            Message_MsgDisp("主人公", "What should I do...?");
            Character_BlinkStart(1, 0, (#1));
            Voice_PlayVoice("I1601000_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Female customers in particular are\nscary when waiting.\nI'll go and apologize.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I made a mistake...)");
            }
        Parameter_AddCh1Param(1, 61, 5);
        Parameter_AddCh1Param(1, 60, 3);
        Parameter_AddCh1Param(1, 62, #3);
        }
    else if (Parameter_GetByParam(1, 52) >= 90){
        if (Parameter_GetCh1Param(1, 130) <= 3){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(16, "S3_17F", 0);
            Music_PlayBGM(0, "MN_C_16_000_D00");
            Voice_PlayVoice("I1601000_P01100", #1, "");
            Message_Who(16);
            Message_MsgDisp("Master", "Was that cream on top of the scone\nin a flower shape?\nIt's lovely and amazing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, yes...\nI just thought that the regular\ncustomers would be happy with a\ndifferent arrangement now and then.");
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("I1601000_P01200", #1, "");
            Message_Who(16);
            Message_MsgDisp("Master", "That is certainly true....\nThat is a possibility.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("I1601000_P01300", #1, "");
            Message_Who(16);
            Message_MsgDisp("Master", "Perhaps I should leave Sangosho in\nyour care and not Teru's.");
            Message_Who(0);
            Message_MsgDisp("主人公", "T-That's...");
            Character_BlinkStart(1, 3, (#1));
            Voice_PlayVoice("I1601000_P01400", #1, "");
            Message_Who(16);
            Message_MsgDisp("Master", "Hahaha!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was complimented by Master!)");
            }
        else {
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(1, "M1_13F", 0);
            Music_PlayBGM(0, "MN_C_01_004_D00");
            Voice_PlayVoice("I1601000_A01500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Did you change the presentation of\nthe cream on the scone?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, yes...\nI thought that it'd make the regular\ncustomers happy if they got a\ndifferent arrangement from time to\ntime.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("I1601000_A01600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hmm...\nYou really are cut out for this job.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really? You think so?");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("I1601000_A01700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nIf the two of us ran Sangosho, we'd\nsurely do well...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Uhh, meaning...");
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("I1601000_A01800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "!! Nothing...\nNo, it was just hypothetically\nspeaking.\nYeah, hypothetical.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was complimented by\n｛Saeki＊＊｝!)");
            }
        Parameter_AddCh1Param(1, 61, 5);
        Parameter_AddCh1Param(1, 60, 10);
        Parameter_AddCh1Param(1, 62, #5);
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
