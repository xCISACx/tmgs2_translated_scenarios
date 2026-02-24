section "b04_m8_100"{
    int var0 = Date_GetDateOption(2, 30);
    if (var0 == 0){
        Character_Chara_GS2(8, "M8_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0408100_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Can you skate?\nIf you can't, I'll coach you.");
        Message_MsgSel("If it's skating, leave it to me!", "I'm alright at it.", "I'd like for you to teach me how to skate.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 4);
                Date_InData_Date(321, 1);
                Character_Chara_GS2(8, "M8_??F", 0, 1, 1, 35);
                Character_ChFace(1, 4, 0);
                Character_ChFace(1, 2, 4);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0408100_H00100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Oh, how dependable.\nThen should I get you to show me\nwhat you're good at?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
                Message_SkinshipSet(0);
                }
            else if (Parameter_GetPl1Param(19) < 40){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 4, 0);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0408100_H00200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... Really?\nIt's shameful to just be all talk,\nyou know?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408100_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Then let's go.\nIf you feel like things are getting\nbad, call me right away～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1, 35);
            Character_ChFace(1, 4, 0);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408100_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "It's good that you're honest.\nLet's start off with trying to walk\non the ice.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(8, "M8_??F", 0, 1, 0);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0408100_H00500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "So, what should we do?");
        Message_MsgSel("Let's race!", "Make believe figure skating?", "Should we skate however we want?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408100_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, isn't that big talk.\nAlright, if you win, I'll treat you\nto your favorite food!\nLet's go!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Character_BlinkStart(8, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408100_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Us two, the amateurs?\nYou're such a kid. Hahaha!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0408100_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... Why?\nIt feels unpleasant, all of a\nsudden.\nI won't understand if you don't tell\nme, you know?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(8, "M8_??F", 0, 1, 0);
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(8, 3, (#1));
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0408100_H00900", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "*Phew*... I'm tired.");
        Message_MsgSel("I can still keep going!", "Should we take a short break?", "Is it because of your age?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1, 35);
            Character_BlinkStart(8, 0, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408100_H01000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You're energetic... I still might...\nYeah, I should be able to...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1, 35);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408100_H01100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Good idea.\nWe'll save our stamina and use it in\nthe second half!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(8, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(8, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0408100_H01200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... What are you saying...\nI'm still not finished, yet!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_BlinkStart(8, 2, (#1));
                Character_ChFace(0, 7, 1);
                Voice_PlayVoice("B0408100_H01300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", ".........");
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm... ｛Masaki＊＊｝?");
                Character_ChFace(0, 3, 4);
                Character_BlinkStart(8, 3, (#1));
                Character_ChFace(0, 7, 0);
                Voice_PlayVoice("B0408100_H01400", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "A three year difference...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(8, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0408100_H01500", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "There are times...\nwhen I think, \"It's no big deal\" and\n\"I am old\"...");
                Character_BlinkStart(8, 0, (#1));
                Voice_PlayVoice("B0408100_H01600", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Actually, I've never paid attention\nto it before, but I don't know how\nto deal with it...");
                Character_BlinkStart(8, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0408100_H01700", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "At most, it's three years...\nBut it's still three years...");
                Message_Who(0);
                Message_MsgDisp("主人公", "What exactly are you talking about,\n｛Masaki＊＊｝...?");
                Character_BlinkStart(8, 2, (#1));
                Voice_PlayVoice("B0408100_H01800", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "...\nI also don't know how to response.\nMaybe it's because of my age.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(What's wrong with him?\n｛Masaki＊＊｝ is acting\nstrange...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
