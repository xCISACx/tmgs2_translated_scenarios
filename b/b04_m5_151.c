section "b04_m5_151"{
    int var0 = Date_GetDateOption(2, 43);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("", 5, "B0405151_E00000");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝, how good are\nyou at bowling?");
        Message_MsgSel("I'd like for you to teach me how to bowl.", "Let's compete to see who wins!", "Since we're playing, let's take it easy?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405151_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Let me see your form then....\nHmm, pretty. Let's start from there.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405151_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Wouldn't it be fine if it were more\nrelaxed...?\nOr is that no good?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405151_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Thank gosh.\nI wanted to do it that way, too.\nYou can start first▼");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 0, 9);
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405151_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah. Only the middle pin is left.");
        Message_MsgSel("How lucky.", "I'll knock it over with my force of will.", "That's actually hard to knock over.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405151_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I thought so, too...\nIt'll be embarrassing if I miss\nit...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405151_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah! It really fell over! What?\nWhat did you do?\nWow, that really surprised me!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0405151_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nSaying that piles on the pressure...\nI'm nervous, so very nervous...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405151_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah～ It seems like my arm muscles are\ngoing to hurt.");
        Message_MsgSel("Mine too...", "Bowling won't do that to your arm muscles.", "It would be good if you get it massaged.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405151_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Wow, we're both in the same state.\nLet's brag about it at school.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405151_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I see, maybe it's just my\nimagination.\nLet's continue, then.");
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
                Character_BlinkStart(5, 2, (#1), 1);
                Voice_PlayVoice("B0405151_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Is it wrong to be worried about my\nmuscles hurting...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0405151_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "A massage...\nIf you gave me a massage, I'd\nprobably feel 100 times better.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Should I give you one?");
                Character_ChFace(0, 0, 11);
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405151_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Eh, you will? ... Here?");
                Message_Who(0);
                Message_MsgDisp("主人公", "It's fine. Stretch out your arm.");
                Character_ChFace(0, 0, 6);
                Voice_PlayVoice("B0405151_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Okay...");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405151_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... No, I'm fine.");
                Message_Who(0);
                Message_MsgDisp("主人公", "But there's no real reason to\nrefuse.");
                Character_ChFace(0, 4, 0);
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405151_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "No......\nRather than refusing,");
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405151_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "If you do give me a massage, I'd be\nso happy that I'd probably fall\nasleep.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405151_E01800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "That's bad, isn't it? So I'll pass.");
                Character_BlinkStart(5, 0, (#1));
                Voice_PlayVoice("B0405151_E01900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You can give me one when we're at my\nplace, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "O-Okay...");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 5);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405151_E02000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yay. It's a promise, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Hmm, I wonder if that's okay...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
