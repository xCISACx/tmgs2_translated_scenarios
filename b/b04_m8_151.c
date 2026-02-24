section "b04_m8_151"{
    int var0 = Date_GetDateOption(2, 43);
    if (var0 == 0){
        Character_Chara_GS2(8, "M8_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408151_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Now then, let's start!\nRight, how good are you at bowling?");
        Message_MsgSel("I'd like for you to teach me how to bowl.", "Let's compete to see who wins!", "Since we're playing, let's take it easy?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 4, 0);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(8, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408151_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeah, alright.\nLet's start with the way you hold\nit...\nso you do know how to hold it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(8, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0408151_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Compete...\nI'll verse you when you get better.\nThere's no way you can compete right\nnow.\nProbably.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 4, 0);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(8, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408151_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Haha, right.\nIt's not a bad thing to have fun.");
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
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408151_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "It's boring playing a normal game,\nso let's set an objective.");
        Message_MsgSel("A perfect score!", "Get more than one strike and spare!", "Watch out so we don't bowl gutter balls.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(8, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0408151_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Even so...\nisn't that outta your league?\nIt's fine setting a lower bar.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408151_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, that realistic objective is\ngood.\nBut if you're too self-conscious,\nwon't you only be overly serious\nabout it?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408151_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Right...\nIt's a good objective for you since\nyou bowl more gutter balls.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(8, "M8_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_NE310_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408151_H00800", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I get the feeling that the way you\nbowl is strange...");
        Message_MsgSel("I'm doing it like how I was taught.", "What's so strange about it...?", "Special Move: Bowling Thunder!");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(8, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0408151_H00900", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Seriously? ...\nGeez, who the hell taught you how to\nbowl so randomly...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0408151_H01000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Seriously? ...\nGeez, who the hell taught you how to\nbowl so randomly.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm, there's a person in my grade\nwho is good at bowling...");
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0408151_H01100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... Stop!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Wah! W-What's wrong?\nYou're shouting...");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(8, 2, (#1));
                Voice_PlayVoice("B0408151_H01200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... Ah～...");
                Character_BlinkStart(8, 3, (#1));
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0408151_H01300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "...\nYou don't have to tell me who taught\nyou.\nIt doesn't matter....\nI won't know who it is if you told\nme.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
                Character_BlinkStart(8, 0, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0408151_H01400", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "... Anyway!\nThe way you bowl is strange so let's\nredo your form.");
                Character_ChFace(0, 2, 0);
                Voice_PlayVoice("B0408151_H01500", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "By the time we leave, you'll be so\ngood you'll be like, \"what's a\ngutter ball?\".\nTry bowling.");
                Message_Who(0);
                Message_MsgDisp("主人公", "O-Okay!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Is ｛Masaki＊＊｝ angry...?\nI wonder if I said something\nstrange...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408151_H01600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "The ball might be heavy.\nTry choosing a ball that suits you.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 3);
            Character_BlinkStart(8, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408151_H01700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hah! What's with that name!?\nWahahahaha! You're... funny!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Parameter_ChkSpEvent("B05", "M8", 0) != 0){
        System_Call_GS2("B05", "M8", 0);
        System_GlobalWork(3, 0, 1);
        }
    }
