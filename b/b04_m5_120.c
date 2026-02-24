section "b04_m5_120"{
    int var0 = System_Randam(0, 100);
    if (var0 <= 50){
        Date_GetDateOption(2, 32);
        }
    else {
        Date_GetDateOption(1, 32);
        }
    if (Date_GetDateOption(1, 32) == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP700_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 5, "B0405010_E00000");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝.\nWhat about this?");
        Message_MsgSel("Really? I'll try it out!", "What should I do? I'm not sure.", "No, I'll pass!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405010_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nI think it'll look good on you▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405010_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You didn't like it...\nLet's go somewhere else, then.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(5, 2, (#1));
            Voice_PlayVoice("B0405010_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ugh, you're so unkind...\nI thought it was nice, though.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else {
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 3);
        Character_ChFace(0, 4, 1);
        Background_Bg_GS2("BG_FP700_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405010_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hey, hey, what about this?");
        Message_MsgSel("Really? I'll try it out!", "What should I do? I'm not sure.", "No, I'll pass!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0405010_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Sorry, I was joking.\nLet's pretend this didn't happen.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405010_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, you're really worrying.\nDon't worry about it, it was a joke.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405010_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Nice reaction.\nIf you wore that, it would reduce\nyour cuteness～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
