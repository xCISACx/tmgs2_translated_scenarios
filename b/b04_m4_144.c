section "b04_m4_144"{
    int var0 = Date_GetDateOption(2, 39);
    Background_Bg_GS2("BG_NE250_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_10_P83_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404144_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hmm...\nWow, there are some who like this\ntype of crowd, not like myself.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404144_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "The lyrics were not good enough,\nthough, the performance itself\nwasn't bad.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404144_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "The genre I like is probably a\nlittle different～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404144_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Maybe I should try hip-hop, but I\ncan't seem to learn the meaning.");
        Message_MsgSel("I don't think it'll suit you, ｛Hariya＊＊｝.", "It's impossible if you can't speak English.", "Do your best, I'll support you!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404144_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Right! No time to spend on it!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404144_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Really?\nSome people would still sing even if\nthey don't know English, don't they?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("B0404144_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Woah, I didn't get the feeling～.\nI don't need that kind of support.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404144_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Didn't you feel the song's lyrics a\nwhile ago were peculiar?");
        Message_MsgSel("I like your songs, ｛Hariya＊＊｝.", "I was never able to hear it.", "I understand how you feel...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404144_D00800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "See～?\nOkay, let's go and karaoke, I'll let\nyou hear more!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404144_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well, that may be.\nSinging it in a loud voice would\nmake it difficult to hear it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0404144_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "What could you feel from those kind\nof lyrics?\nI don't understand～...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404144_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Even if it's the kind of thing you\ncan't usually talk about, when you\nput it into a song, you can talk\nabout it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ooh... For example?");
                Voice_PlayVoice("B0404144_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "For instance, like today, a\nbittersweet love...");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404144_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "That's not it!\nWhat are you trying to get me to\nsay?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh? What?");
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404144_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nTo collect lyrics of an anti-thesis\nwho is against the world!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Anti...? Oh... I see.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404144_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Yeah, it's true...\n*sigh* Well, let's head home...");
                }
            break ;
            }
        }
    }
