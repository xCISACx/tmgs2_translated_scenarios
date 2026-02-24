section "b04_m5_170"{
    int var0 = Date_GetDateOption(2, 48);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405170_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Which should we choose first～.");
        Message_MsgSel("Choose your best song, ｛Chris＊＊｝.", "Let's go for the most recently added songs!", "A duet would be nice.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0405170_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I do like a song, but it's not my\nbest...\nIs that okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405170_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay.\nLet's sing the chorus together▼");
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
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405170_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, this song is good for duets.\nDo you know the song \"Beautiful\nHabataki's Love Song\"?");
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
        Background_Bg_GS2("BG_NE500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405170_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hey, can I request an Enka song?");
        Message_MsgSel("No, because it's so plain.", "I don't like Enka.", "Hmm, are old songs also okay?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(5, 3, (#1), 1);
            Voice_PlayVoice("B0405170_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "But the melody is very dramatic?\nPlain, huh... I see...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405170_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Is that so.\nI'll choose another song, then.");
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
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405170_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Of course! Oldies are also good.");
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
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_NE500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0405170_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "*Sigh*. I sang quite a lot～.");
        Message_MsgSel("Should we order some drinks?", "Can I request a last song?", "We're still not done here!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405170_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah.\nI'm hungry too, so could you please\nalso order some snacks?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 9);
                Voice_PlayVoice("B0405170_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Is it over already...? How sad...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405170_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "A request, huh...\nMy heart is throbbing.\nWhich song are you gonna choose?");
                Message_Who(0);
                Message_MsgDisp("主人公", "This one!\nIt's my favourite non-Japanese song.");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405170_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "What's wrong?");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405170_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... I also love this song.\nMy mom often sang it to me when I\nwas young.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh, is that so?");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405170_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah.\nI'm glad, even though it was a\ncoincidence.");
                Character_BlinkStart(5, 3, (#1));
                Voice_PlayVoice("B0405170_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "If you say that you like it, it\nseems like I'll like it even more\nnow.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0405170_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Let's sing together, then.\nReady, start.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405170_E01700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You're so energetic.\nLet's stay a little longer, then.");
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
    }
