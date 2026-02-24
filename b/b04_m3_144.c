section "b04_m3_144"{
    int var0 = Date_GetDateOption(2, 39);
    Background_Bg_GS2("BG_NE250_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_10_P83_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403144_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nBut I did not find it interesting or\nanything.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403144_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nI had no clue as to what was good\nabout that performance.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403144_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Yeah.\nIt is a world that I could not keep\nup with.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(3, 3, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403144_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Do you like this kind of music?");
        Message_MsgSel("I love hip-hop more than eating!", "I actually don't like it...", "Well, not these songs.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403144_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nMeaning that our preferences clash\nwith each other...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403144_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Then there was no need for both of\nus to come here today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403144_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see.\nThey should have good songs, right?\nBut even so, I could not like the\nsongs they played today.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(3, 2, (#1));
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403144_C00700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... It is quite tongue twisting.\nI had no clue as to what they were\nsaying.");
        Message_MsgSel("But it sounded good in my ears.", "Red paper rolls, blue, yellow...", "Weren't those rhymes good?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0403144_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nWhen I do not understand the\nmeaning, it just sounds like jarring\nnoise to me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403144_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nRight, the only thing I could\ncomprehend were the things that were\nnot being sung.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403144_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Lime...? Ah, you mean rhyme....\nDidn't I say that I could not follow\nthem?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0403144_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nWere you able to follow those\nlyrics?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, parts...");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0403144_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nRhyme, in other words, a song that\nrhymes.\nI see, I wonder if I should have\nenjoyed listening to it more...");
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403144_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Even though I was desperate to grasp\nthe meaning, I ignored the rhythm...\nIt is no wonder that I did not\nunderstand a thing.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You don't have to think about it too\ndeeply, ｛Hikami＊＊｝...");
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403144_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh? ...\nAh, sorry for pondering over it.\nIt is a habit.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha!");
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403144_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nYou do not look at me with hateful\neyes, even when I am pondering over\nthings.");
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403144_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Each and every one of your actions\nmakes me...\nglad.");
                Message_Who(0);
                Message_MsgDisp("主人公", "...?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403144_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "When I am talking to you...\nsomehow, I can relax.\nIf it were another person, I would\nnot be able to.");
                Message_Who(0);
                Message_MsgDisp("主人公", "...\nI don't know what you're talking\nabout, but you're welcome.");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0403144_C01800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Me too....\nPlease continue to treat me well\nfrom now on.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I wonder if ｛Hikami＊＊｝\nwanted to say something...)");
                }
            break ;
            }
        }
    }
