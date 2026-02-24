section "b04_m5_074"{
    int var0 = Date_GetDateOption(2, 21);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405074_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It's... Summer. It's... hot.");
        Message_MsgSel("It's a shower of sunlight!", "I don't like Summer...", "It seems cooler in the shade of the trees.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_BlinkStart(5, 2, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0405074_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I don't want that kind of shower～.\nI'm melting～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405074_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Me too～.\nBut I like it because the clothing\nthe cute girls wear are amazing～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_BlinkStart(5, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405074_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah...\nLet's hurry up and go there...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405074_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Why are Japanese summers so hot and\nhumid...");
        Message_MsgSel("To distinguish between the four seasons.", "I wonder if there will be a shower.", "If you think it's not hot, then it won't be!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405074_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right...\nIf there weren't four seasons then\nyou wouldn't be able to get a taste\nof this feeling.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405074_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, that would be nice.\nIt seems like the rain will wash\naway the heat.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405074_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "If you clear your mind of all\nthoughts, a fire will be\ncool............\nNo, hot things will still be hot～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_BlinkStart(5, 2, (#1));
        Background_Bg_GS2("BG_FP220_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405074_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Argh～... I can't stand this heat～.\nHey, let's go to some store or\nsomething.");
        Message_MsgSel("But the wind feels nice...", "Yeah or the sunburns will give us blisters!", "So you don't like the heat.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405074_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's warm～. It doesn't feel good～.\nI hate this～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_BlinkStart(5, 0, (#1), 2);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405074_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That would be big trouble if it\nhappened to your skin.\nLet's hurry and find shelter.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 2);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405074_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "As you can see... It's hot～...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405074_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah...\nI'm fine with the cold, though...");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Haha.");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405074_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hmm? What is it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "You don't often get down hearted, so\nI thought it was cute.");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405074_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "C-Cute... Me?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405074_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Wh...what are you saying?\nIt was so sudden, it surprised me...\nAh.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝!?");
                Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405074_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I got a rush of blood to my head\nbecause of you...");
                Message_Who(0);
                Message_MsgDisp("主人公", "S-Sorry. Are you okay?");
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405074_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Geez...\nJust how much do you plan on making\nme feel like this...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(D-Did I surprise him that much?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
