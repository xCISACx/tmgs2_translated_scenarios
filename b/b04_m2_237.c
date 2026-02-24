section "b04_m2_237"{
    if (Date_ChkDateOpen(75) == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_TR630_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402235_B01700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Ehh...\nThis is my first time seeing a\nmotorbike race that's not on TV.");
        Message_MsgSel("The flashy colors of the bikes are pretty.", "It looks like it'd hurt if they fell...", "I prefer cars.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402235_B01800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah, it's refreshing.\nI wonder if the drivers paint it\nthemselves?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402235_B01900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It wouldn't just be a light injury,\nright?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402235_B02000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You don't have to come here and say\nit like that...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (Date_ChkDateOpen(74) == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_TR610_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402235_B02100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "There's a lot of force.");
        Message_MsgSel("I feel the jam-packed tension!", "I want to see a crash with force!", "I want to see perfect cornering!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402235_B02200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "The tense feeling after the race has\nbegun is better.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402235_B02300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You don't have to think about those\nthings.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402235_B02400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You get it, don't you?\nIt'd surely feel good going around\nthe corner at that speed.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (Date_ChkDateOpen(76) == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_TR620_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402235_B02500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The National Championships, huh...\nI feel the heat in the air.\nMore so than usual.");
        Message_MsgSel("It's like they're not serious about it.", "A pro's technique is amazing!", "... Is it that hot?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402235_B02600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "They would be serious, right?\nSince they're competing to be the\nbest in Japan.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402235_B02700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah, it's amazingly cool.\nJust watching them drive gets me\nexcited.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0402235_B02800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "*Sigh*... That's not how I meant it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(2, 61, 3);
        Parameter_AddCh1Param(2, 60, 2);
        Parameter_AddCh1Param(2, 62, #2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(2, 61, 2);
        Parameter_AddCh1Param(2, 60, 1);
        Parameter_AddCh1Param(2, 62, #2);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(2, 61, 1);
        Parameter_AddCh1Param(2, 60, 0);
        Parameter_AddCh1Param(2, 62, #1);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(2, 61, 0);
        Parameter_AddCh1Param(2, 60, #1);
        Parameter_AddCh1Param(2, 62, 1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(2, 61, #1);
        Parameter_AddCh1Param(2, 60, #2);
        Parameter_AddCh1Param(2, 62, 2);
        }
    }
