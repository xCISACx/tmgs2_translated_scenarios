section "b04_m3_237"{
    if (Date_ChkDateOpen(75) == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR630_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403235_C01900", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The race is free for everyone.\nAt any rate, it is so intense...");
        Message_MsgSel("I haven't seen bikes like these.", "Wah, it looks like they'll fall...!", "They've done quite a few laps.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403235_C02000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Because it is a race.\nRather, I am more surprised that\nthey can drive at such extreme\nspeeds without colliding.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403235_C02100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It is alright.\nWhen they go around the corner, only\ntheir knees scrape on the track.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403235_C02200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes.\nThe voices of the spectators when\nthey pass in front of the stands\nexcites them.\nMaybe they'll get a good lap time?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (Date_ChkDateOpen(74) == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR610_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403235_C02300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It's quite interesting watching what\nthey do when they are in the pit.");
        Message_MsgSel("There are a lot of people.", "Wah, they move really fast!", "What are those people doing?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403235_C02400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, a race cannot be done with just\nthe one driver.\nThey compete as a team.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403235_C02500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "As expected, they do not waste time\nwith their movements.\nThe pit members of teams that want\nto win are also passionate.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0403235_C02600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I wonder where I should start\nexplaining from so that you will\nunderstand.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (Date_ChkDateOpen(76) == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_TR620_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0403235_C02700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nEven the people in the stands are\nmore enthusiastic today.");
        Message_MsgSel("It's the National Championships!", "If they win, will they go on to world races?", "Ah, they're selling hot dogs!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403235_C02800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, these famous drivers are\nfighting for the #1 spot in Japan.\nIt is a serious competition.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403235_C02900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Probably.\nSorry, I do not know much about\nthis.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403235_C03000", 3, "B0403235_C03001");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... ｛主人公｝.\nWere you listening to what I was\nsaying?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(3, 61, 3);
        Parameter_AddCh1Param(3, 60, 2);
        Parameter_AddCh1Param(3, 62, #2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(3, 61, 2);
        Parameter_AddCh1Param(3, 60, 1);
        Parameter_AddCh1Param(3, 62, #2);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(3, 61, 1);
        Parameter_AddCh1Param(3, 60, 0);
        Parameter_AddCh1Param(3, 62, #1);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(3, 61, 0);
        Parameter_AddCh1Param(3, 60, #1);
        Parameter_AddCh1Param(3, 62, 1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(3, 61, #1);
        Parameter_AddCh1Param(3, 60, #2);
        Parameter_AddCh1Param(3, 62, 2);
        }
    }
