section "b04_m5_237"{
    if (Date_ChkDateOpen(75) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR630_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0405235_E01700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I wanna try riding a motorbike.");
        Message_MsgSel("I'll cheer for you when you're racing.", "Motorbikes are extremely dangerous!", "Horses are more suited to you.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405235_E01800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm not going to race...\nAnd I won't be going that fast...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405235_E01900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Are you worried about me? Thanks.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405235_E02000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really? I think so, too.\nMotorbikes are still too advanced\nfor me.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (Date_ChkDateOpen(74) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_TR610_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0405235_E02100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I wonder if they're not scared of\ngetting up to those kinda speeds...");
        Message_MsgSel("I don't think they're not scared.", "If they are, wouldn't they not be doing this?", "You were yelling, ｛Chris＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405235_E02200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "They're probably pros because they\ngot over that......\nIt's impossible for me...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405235_E02300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right... Eh, is that really true?\nIsn't that wrong?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405235_E02400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Because they were on the verge of\nspinning out of control...\nAh, let's just keep this our little\nsecret, okay?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (Date_ChkDateOpen(76) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR620_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0405235_E02500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I'm more interested in cars and\nstuff than the actual racing.");
        Message_MsgSel("Do you want to try painting the cars?", "They all look the same to me.", "By \"cars and stuff\" you mean...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405235_E02600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I do!\nI'm really, really interested in\nthat.\nI wonder if someone will let me\npaint their car...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405235_E02700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I see... I guess so.\nIf you're not interested in them...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405235_E02800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "What's wrong?\nYour eyes are narrowed.\nI'm not looking at the race\nqueens....\nI'm not.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Date_Date_Data(124) >= 4){
        Parameter_AddCh1Param(5, 61, 3);
        Parameter_AddCh1Param(5, 60, 2);
        Parameter_AddCh1Param(5, 62, #2);
        }
    else if (Date_Date_Data(124) == 3){
        Parameter_AddCh1Param(5, 61, 2);
        Parameter_AddCh1Param(5, 60, 1);
        Parameter_AddCh1Param(5, 62, #2);
        }
    else if (Date_Date_Data(124) == 2){
        Parameter_AddCh1Param(5, 61, 1);
        Parameter_AddCh1Param(5, 60, 0);
        Parameter_AddCh1Param(5, 62, #1);
        }
    else if (Date_Date_Data(124) == 1){
        Parameter_AddCh1Param(5, 61, 0);
        Parameter_AddCh1Param(5, 60, #1);
        Parameter_AddCh1Param(5, 62, 1);
        }
    else if (Date_Date_Data(124) == 0){
        Parameter_AddCh1Param(5, 61, #1);
        Parameter_AddCh1Param(5, 60, #2);
        Parameter_AddCh1Param(5, 62, 2);
        }
    }
