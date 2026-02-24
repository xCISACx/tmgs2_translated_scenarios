section "b04_m5_236"{
    int var0 = Date_GetDateOption(2, 72);
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
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR560_SU_2", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGB_071_000", 127, 40);
        Voice_PlayVoice("B0405236_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The parade is so fun.");
        Message_MsgSel("It's like they came from a jewel box!", "I want to watch it forever...", "Let's dance together▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405236_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, it's so pretty!\nIt seems like if we followed the\nparade, we'd be taken to a dream\nworld.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(5, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0405236_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That's bad～.\nThey have specific times to show\nthese kinds of events...\nIt's b-bad... occupational disease.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405236_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Ah, it looks like they're teaching\nus the dance moves.\nLet's learn them and dance together▼");
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
        Background_Bg_GS2("BG_TR560_SU_2", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGB_071_000", 127, 40);
        Voice_PlayVoice("B0405236_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That fairy is so cute!!\nIt looks like the real thing...");
        Message_MsgSel("Hmph...", "I want to be a fairy. too.", "There aren't any real fairies.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405236_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "What's wrong? ...\nAh, are you jealous of the fairy?\nTell me.");
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
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405236_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Wah...\nI wanna see that, but if I see you\nlike that, I'll probably hug you\nstraight away...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0405236_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah...\nBut that person over there looks\nlike an inhabitant of the dream\nworld...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR560_SU_2", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGB_071_000", 127, 40);
        Voice_PlayVoice("B0405236_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I wonder if the prince of the parade\nis always a foreigner.");
        Message_MsgSel("If so, then you could be the prince.", "I don't think that's true.", "I wonder if I could be the prince.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405236_E00900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'll sign up for it, then.\nAh, and of course, you would be my\nprincess▼");
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
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405236_E01000", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I haven't seen a Japanese prince\nbefore, though...\nHm? Is that what a feudal lord is?");
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
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0405236_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Eh... as a prince?\nWhy are you talking about being the\nprince and not the princess?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405236_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "A prince?\nBut I'd wanna see you as the\nprincess.");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405236_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "And I'd be the prince.\nThere's enough magic in the air.");
                Message_Who(0);
                Message_MsgDisp("主人公", "What will you do if the magic cast\non the princess wears off at\nmidnight?");
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0405236_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... I won't let it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Voice_PlayVoice("B0405236_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Even if it does wear off...\nI'll still come after you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Chris＊＊｝ looks really\nserious...\nI wonder what's up with him...)");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405236_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... Or something like that.\nIt's got nothing to do with magic.");
                Character_BlinkStart(5, 2, (#1));
                Voice_PlayVoice("B0405236_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Anyway, let's dance.\nPlease give me your hand, Princess.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝...");
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
