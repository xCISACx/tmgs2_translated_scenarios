section "b04_m5_192"{
    int var0 = Date_GetDateOption(2, 62);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_10F", 0);
        Background_Bg_GS2("BG_TR121_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("", 5, "B0405192_E00000");
        Message_Who(5);
        Message_MsgDisp("Chris", "Are you good at skiing,\n｛主人公｝?");
        Message_MsgSel("If it's skiing, leave it to me!", "I'm alright at it.", "I can't ski at all.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 3);
                Date_InData_Date(321, 1);
                Character_Chara_GS2(5, "M5_10F", 0, 1, 1, 35);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(5, 3, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0405192_E00100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Ehh. Then you'll be my instructor.\nMiss Instructor▼");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetPl1Param(19) < 40){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405192_E00200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Eh, then... S-Stop!\nIt's dangerous skating with your\nfeet～!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0405192_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "\"Alright\"...\nDoes that mean you're good at it?\nOr does it mean you're bad at it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_10F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405192_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I see.\nLet's both try and become good at\nskiing.\nLet's aim to be a lovey-dovey pair\nof skiers▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_10F", 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_TR120_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0405192_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hey, were you watching me?\nI was mogul skiing.");
        Message_MsgSel("You did an amazing jump!", "Sorry, will you do it once more?", "It was nothing, really.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_10F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405192_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Wasn't it?\nI'm so happy that you were watching\nme～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405192_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So you weren't watching...\nSorry, I probably can't do it,\nagain...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_10F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405192_E00800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I still need some practice, don't I?\nI'll do my best.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_10F", 0);
        Background_Bg_GS2("BG_TR120_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0405192_E00900", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Wow.\nWhen you take a closer look at the\nsnow, you can really see the\ncrystals.");
        Message_MsgSel("The small crystals are cute.", "There are a variety of shapes.", "You can't see that with a naked eye.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_10F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405192_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "The small crystals are spread around\nall over～.\nIt's like a crystal carpet.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_10F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 6);
            Character_ChFace(1, 4, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405192_E01100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, you're right.\nThis is star shaped...\nThis one looks like a flower.\nHow pretty.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405192_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nDon't say that without looking\nfirst～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0405192_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Don't say that without looking\nfirst～.\nSee, take a look.");
                Message_Who(0);
                Message_MsgDisp("主人公", "......... Ah, you're right.\nIt's a pretty hexagonal shape...");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405192_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Right.............");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hm? What's wrong?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405192_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "When I look at you properly, you're\ncute.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 3);
                Voice_PlayVoice("B0405192_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You're kinda like a small child.\nIt makes me want to pat you on the\nhead.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh... Umm...");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405192_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Seeing you all flustered like that\nis also cute.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh...\nI don't know how to respond to\nthat～)");
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
