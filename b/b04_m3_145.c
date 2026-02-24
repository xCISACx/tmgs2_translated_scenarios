section "b04_m3_145"{
    int var0 = Date_GetDateOption(2, 40);
    Background_Bg_GS2("BG_NE260_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_NE_240_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(3, 3, (#1));
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
            Voice_PlayVoice("B0403145_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "............\nIt seems like our values are\ndifferent.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(3, 2, (#1), 1);
            Voice_PlayVoice("B0403145_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "So-so? That noisy performance?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(3, 2, (#1), 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403145_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, as expected, it reconfirms that\nit is a world that I cannot\nunderstand.");
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
        Character_BlinkStart(3, 3, (#1));
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403145_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nEven though the music was loud, I\ncould hear the screams of the girls\nin the audience.");
        Message_MsgSel("There are a lot of passionate fans.", "I was also surprised.", "Because the vocalist is beautiful～▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("B0403145_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, it seems so....\nBut I do not understand the thing\nthat made them so fired up at all.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_BlinkStart(3, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403145_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You too? ...\nWe may be sticking out like a sore\nthumb.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_BlinkStart(3, 0, (#1));
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403145_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... So you like that kind of thing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_BlinkStart(3, 3, (#1));
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403145_C00700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "No matter how many times I listen to\nit, I cannot like it...");
        Message_MsgSel("I understand what is so good about this.", "It's not suited to our tastes...", "Are you jealous, ｛Hikami＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_BlinkStart(3, 0, (#1), 1);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403145_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It seems that way.\nBut I do not understand.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_BlinkStart(3, 0, (#1), 2);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403145_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "It seems that way.\nWe should hurry up and leave this\nplace.");
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
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0403145_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nI do not have any feeling of\njealousy towards the band, not in\nthe slightest.\nIn other words, I am not envious.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0403145_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Eh?\nDid I say that I was jealous?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm, somewhat...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403145_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "But I had no intention to...\nAre you perhaps one of their fans?");
                Message_Who(0);
                Message_MsgDisp("主人公", "No... I don't think I am their fan.");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403145_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Then I can make a declaration.\nI have no reason to envy them.\nI am not even jealous of that shrill\nvoice.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm...\nSo then what if I was their fan?");
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403145_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "That's...\nIf I perhaps knew that, and was\nwatching them, then my heart might\nnot be calm...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh...?");
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403145_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Ah, no!\nI quite dislike this kind of noise.\nI have always had this problem,\nrather than jealousy.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(I wonder why ｛Hikami＊＊｝\nis embarrassed...)");
                }
            break ;
            }
        }
    }
