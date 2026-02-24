section "b04_m2_142"{
    int var0 = Date_GetDateOption(2, 37);
    Background_Bg_GS2("BG_NE230_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_095_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That comedy show was the best!", "That comedy show was so-so.", "That comedy show was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402142_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I wonder...\nWas there something funny in the\nshow?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402142_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "For this kind of thing, having a\nperformance being \"so-so\" is bad.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402142_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Yeah. I didn't laugh.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402142_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Everyone around us was laughing, but\nI couldn't laugh....\nAre my senses off?");
        Message_MsgSel("People laugh at different things.", "Ahaha, that sounds like you!", "Eh～!? Aren't you a little strange?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402142_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I see. Then it's fine.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402142_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... What do you mean by that?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402142_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Uh...\nBut I thought I was an ordinary\nperson...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0402142_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "You laughed too much today...");
        Message_MsgSel("Because they hit the mark!", "My stomach hurts...", "Didn't you also laugh, ｛Shiba＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402142_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I found you funnier.\nSeeing your explosive laughter with\nyour face crumpled and the tears\ncoming out.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402142_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right.\nYou might get muscle pain tomorrow.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402142_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... You misjudged.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Voice_PlayVoice("B0402142_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "No, I didn't.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You did!");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402142_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... That was your misjudgement.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... You don't have to lie about it.\nWhen they were telling the last\njoke...");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402142_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ah.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Amidst all that laughter, the edge\nof your mouth kind of...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402142_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Uh...");
                Message_Who(0);
                Message_MsgDisp("主人公", "So what exactly is that facial\nexpression...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402142_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... I laughed. Hah...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh!?\nWhat's wrong, ｛Shiba＊＊｝?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0402142_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I'm laughing because I remember what\nthe joke was...\nHaha... Hahaha...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ha...!\n｛Shiba＊＊｝'s smile might\nbe a valuable thing...!)");
                }
            break ;
            }
        }
    }
