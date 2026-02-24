section "b04_m5_250"{
    int var0 = Date_GetDateOption(2, 77);
    if (var0 == 0){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_BH151_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_05_001_D01", 127, 40);
        Voice_PlayVoice("B0405250_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Now then... Sit wherever you want.");
        Message_MsgSel("Wow, what an amazing room!", "It has the feeling of a boyish room.", "H-How should I put it, it's a unique room.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405250_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Thanks.\nI'm so happy because no one has ever\nsaid that to me before.");
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
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405250_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Really?\nI'm not really aware of it...\nDo you mean that there are only a\nfew things in here?");
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
            Character_ChFace(0, 3, 5);
            Voice_PlayVoice("B0405250_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Is that so...?\nIt's so simple that I want to\nremodel it, though...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_BH151_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_05_001_D01", 127, 40);
        Voice_PlayVoice("B0405250_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "What are you looking at?\nIs there something interesting?");
        Message_MsgSel("Is this a photo of your family?", "It's a nice, spacious and sunny room.", "On the bookshelves...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405250_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Yeah, it's an amazing photo, right?\nWe take one at the beginning of\nevery year, but I really like this\none.");
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
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405250_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It's nice that it's warm in winter,\nbut it's a problem in summer.\nIt's because all rooms face the\nsouthern direction.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 2);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("B0405250_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "This is a boy's secret territory, so\nyou can't take a look～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_BH151_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_05_001_D01", 127, 40);
        Voice_PlayVoice("B0405250_E00800", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah, they've brought afternoon tea.\nAre you okay with drinking black\ntea?");
        Message_MsgSel("Was that your mother?", "Amazing, there are 3 kinds of sweets!", "The black tea smells really good.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(5, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1), 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405250_E00900", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "No, it's the maid.\nCan't you clearly see that she's an\nold, Japanese lady～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0405250_E01000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "No, that's the maid.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ehh. So you have maids.");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405250_E01100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Yeah, it's normal.\nMom is going around overseas with\ndad.");
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0405250_E01200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "And it's impossible for me to clean\nall the rooms by myself.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see...... Don't you get lonely?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405250_E01300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... No.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405250_E01400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Even if they're away from me, my\nlove for my parents doesn't change,\nand moreover--");
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405250_E01500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "You're here now, so I'm not lonely.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, you're just pretending.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(5, 3, (#1));
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0405250_E01600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "... That's what I'm doing now.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 4, 0);
                Character_BlinkStart(5, 0, (#1));
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0405250_E01700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "The tea we have today is Darjeeling.\nIt's nice, enjoying the fragrance.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Chris＊＊｝...?");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405250_E01800", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "You're right...\nSo we had these in the house...\nHow surprising.");
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
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0405250_E01900", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Doesn't it?\nAh, why don't you take some home\nwith you as a gift?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_GlobalWork(5, 0, 1);
    }
