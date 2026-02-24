section "b04_m2_236"{
    int var0 = Date_GetDateOption(2, 72);
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
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR560_SU_2", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGB_071_000", 127, 40);
        Voice_PlayVoice("B0402236_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The illuminations are awesome.");
        Message_MsgSel("It's like they came from a jewel box!", "I want to watch it forever...", "Let's dance together▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402236_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah. It's sparkling... It's pretty.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Character_ChFace(1, 4, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402236_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "If these loud noises don't bother\nyou...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(0, 3, 0);
            Character_ChFace(0, 4, 0);
            Voice_PlayVoice("B0402236_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Pass. Go by yourself.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR560_SU_2", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGB_071_000", 127, 40);
        Voice_PlayVoice("B0402236_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "That wolf costume...\nI get the feeling that its eye\nexpression is bad.");
        Message_MsgSel("It's like you, ｛Shiba＊＊｝.", "It'd make the kids cry...", "That's cute in its own way.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402236_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "You mean the...\neye expression, right? Hmm...\nRight, that wolf is quite cool.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402236_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nIt's something that I'd cry at, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_BlinkStart(2, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402236_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well... It has its charm.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR560_SU_2", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGB_071_000", 127, 40);
        Voice_PlayVoice("B0402236_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hmm.. What's wrong?\nYou stopped talking all of a sudden.");
        Message_MsgSel("That potato smells nice...", "The other people are blocking the way...", "It'd be nice if time stopped like this...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402236_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "......... You've got a good nose.\nI'm a little hungry now.");
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
            Character_BlinkStart(2, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402236_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It can't be helped.\nEveryone is thinking the same thing.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402236_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nIf time stopped, nothing would move.\nAre you fine with that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402236_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nIf time stopped, nothing would move.\nAre you fine with that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "No, I wasn't thinking about it in\nthat realistic kind of way...");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402236_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", ".........\nAh, you were speaking\nhypothetically.\nMy bad.");
                Voice_PlayVoice("B0402236_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I think that way too, then.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You too, ｛Shiba＊＊｝?");
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("B0402236_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Yeah.");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402236_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "If I'm with you...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402236_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "............ *sigh*...\nWhat am I saying.");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402236_B01800", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "When I'm in this kind of atmosphere,\nmy mouth just moves on its own...");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("B0402236_B01900", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Forget what I just said.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(My heart was slightly racing...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(3, 0, 1);
    System_GlobalWork(5, 0, 1);
    }
