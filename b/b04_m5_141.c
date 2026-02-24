section "b04_m5_141"{
    int var0 = Date_GetDateOption(2, 36);
    Background_Bg_GS2("BG_NE220_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_095_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That play was the best!", "That play was so-so.", "That play was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0405141_E00000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Hmm, what were they talking about in\nthe end?\nI kinda didn't understand...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405141_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right.\nIt would've been better if they made\nit a little easier to understand.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405141_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Definitely. The end was awful～.\nIt was like having cold water thrown\non you～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405141_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That was kinda shoddy.");
        Message_MsgSel("The main character got their lines wrong.", "The main character was cool...", "The main character was laughing...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405141_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, they stumbled a lot on their\nwords.\nIt seems like their tongue would be\ntired.");
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
            Voice_PlayVoice("B0405141_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "...\nIs that what your tastes are like?\nHmm... I can't copy him...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405141_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I laughed heaps, as well!\nThat's what they call an invitation\nto laugh, right?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405141_E00700", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The ending was plain\nincomprehensible...");
        Message_MsgSel("It made me sleepy.", "Your mouth was hanging open.", "This is what it means!");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(5, 2, (#1), 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0405141_E00800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Me too...\nBut snoring loudly like that is\nbad～.\nMeh.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405141_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You fell asleep for a moment.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, you noticed?");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405141_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah. You fell onto my shoulder.");
                Message_Who(0);
                Message_MsgDisp("主人公", "So I leaned against you. Sorry.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405141_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "...\nIt was too bad that it was only for\na moment.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_BlinkStart(5, 0, (#1));
                Voice_PlayVoice("B0405141_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'll lend you my shoulder and my\narm, so tell me next time when you\nget sleepy.\nI'll even lend you my lap, okay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Geez, ｛Chris＊＊｝.\nYou're such a joker.");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0405141_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "......... It's about time we left.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Y-Yeah.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝...?)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 11);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405141_E01400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Wah. You saw it. How embarrassing!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405141_E01500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I see... As expected.\nHey, so what about the lines from\nthe other scene...?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }
