section "b04_m2_147"{
    int var0 = Date_GetDateOption(2, 42);
    Background_Bg_GS2("BG_NE280_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_30_P63_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402147_B00000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It was cool.\nEven the performers seemed like they\nenjoyed it.");
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
            Message_PauseSkinship();
            Voice_PlayVoice("B0402147_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Really? It was a good show.");
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
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402147_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... You're a cold one.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0402147_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's amazing that they can do a\nperformance.\nMusical talent, huh...");
        Message_MsgSel("Surely, it takes effort, too.", "That's how geniuses do it.", "Do you want to perform, too?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402147_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nIt doesn't matter what field you're\nin, it takes effort.");
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
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402147_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "What's with that way of saying it?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402147_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "No... I...\nBut if I could do it, it'd surely be\nfun.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0402147_B00700", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "There are times when I feel that\njazz is seductive...");
        Message_MsgSel("H-How lewd of you!!", "It's still too fast for me...", "I want to be an adult already!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402147_B00800", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Idiot. Don't say trivial things.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402147_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Hm? Ah, it is.\nYou're still inexperienced.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402147_B01000", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Huh?\nI don't know what you're talking\nabout.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402147_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "An adult? ... You?");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402147_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Haha...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, that's mean,\n｛Shiba＊＊｝!\nWhy are you laughing at that?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0402147_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Hahaha... No, it's just...\nI can't really imagine it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "...\nYou were imagining me wearing a suit\nand working just now, weren't you?");
                Voice_PlayVoice("B0402147_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Bullseye.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh～...");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402147_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ah, sorry for laughing. But...");
                Message_Who(0);
                Message_MsgDisp("主人公", "But?");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0402147_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's alright if you don't change.\nFrom the way you are now.");
                Voice_PlayVoice("B0402147_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You can stay the way you are....\nForever and ever.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Shiba＊＊｝...?)");
                }
            break ;
            }
        }
    }
