section "l05_s1_000"{
    Background_Bg_GS2("BG_HO000_WI_0", #1, #1, 0);
    Character_Chara_GS2(14, "S1_04F", 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_C_14_000_D00", 127, 40);
    if (Parameter_GetPl1Param(338) == 1){
        if (Parameter_GetCh1Param(14, 524) >= 1){
            Voice_PlayVoice("L0514000_N00000", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Morning, Sis.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Good morning, Yuu-kun.\nYou're early today.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("L0514000_N00100", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Because today is White Day.\nI have to give a return gift to\nthem.");
            Message_Who(0);
            Message_MsgDisp("主人公", "This early in the morning?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("L0514000_N00200", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Yeah, because I got a lot.\nGeez, being popular is troubling～.");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(14, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("L0514000_N00300", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "So thanks for the chocolate.\nThis is yours, Sis.");
            Message_Who(0);
            Message_MsgDisp("主人公", "T-Thanks...");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("L0514000_N00400", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Now then, I'm going. Later～!");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(14, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yuu-kun is quite diligent for his\nage.\nMaybe I should learn from him?)");
            }
        else {
            Voice_PlayVoice("L0514000_N00500", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Morning～, Sis.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Good morning, Yuu-kun.\nYou're up early today.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("L0514000_N00600", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Because today is White Day.\nI have to give a return gift to\nthem.");
            Message_Who(0);
            Message_MsgDisp("主人公", "At this early in the morning?");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("L0514000_N00700", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Yeah, because I got heaps.\nGeez, being popular is troubling～.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("L0514000_N00800", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "So this is yours, Sis.");
            Message_Who(0);
            Message_MsgDisp("主人公", "T-Thanks...");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("L0514000_N00900", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Now then, I'm going. Later～!");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(14, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though I didn't give him any,\nhe still gave me some!)");
            }
        }
    else if (Parameter_GetPl1Param(338) == 2){
        if (Parameter_GetCh1Param(14, 524) >= 1){
            Voice_PlayVoice("L0514000_N01000", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Morning, Sis.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Good morning, Yuu-kun.\nYou're up early today.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("L0514000_N01100", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Because today is White Day.\nI've got a lot to return, so if I\ndon't go early, it'll be tough\ngiving all the return gifts.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I s-see.");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(14, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("L0514000_N01200", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "So thanks for the chocolate.\nThis is yours, Sis.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, thanks...");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("L0514000_N01300", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Shouldn't you also go to school\nearly, Sis?");
            Voice_PlayVoice("L0514000_N01400", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "I'm going to go. I'm leaving now～!");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(14, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(... Right. Today is White Day.)");
            }
        else {
            Voice_PlayVoice("L0514000_N01500", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Morning, Sis.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Good morning, Yuu-kun.\nYou're up early today.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("L0514000_N01600", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Because today is White Day.\nI've got a lot to return, so if I\ndon't go early, it'll be tough\ngiving all the return gifts.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, I see.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("L0514000_N01700", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "So here is yours, Sis.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, thanks...");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("L0514000_N01800", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "Shouldn't you also go to school\nearly, Sis?");
            Voice_PlayVoice("L0514000_N01900", #1, "");
            Message_Who(14);
            Message_MsgDisp("Yuu", "I'm going to go. I'm leaving now～!");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(14, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Even though I didn't give him any,\nhe still gave me some!)");
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(14, 86, 1);
    Parameter_InCh1Param(14, 524, 0);
    System_Call_GS2("L06", "PL", 0);
    }
