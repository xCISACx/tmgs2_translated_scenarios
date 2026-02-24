section "b04_m4_211"{
    int var0 = Date_GetDateOption(2, 63);
    Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR310_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Voice_PlayVoice("B0404211_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Ugh...\nThat orangutan has been watching us\nfor a while now.");
        Message_MsgSel("Maybe it's bothered by us?", "It might be scared of you.", "Let's play the staredown game with it.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404211_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Huh? That's impossible.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404211_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Maybe it's trying to push around the\nfuture's big star?\nThat guy's got good taste!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404211_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, let's give it a \"Who's the\ntougher one\" look.\nA challenge, a challenge!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0404211_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah, I see.\nThat guy's the monkey boss.\nAmazing strong attitude!");
        Message_MsgSel("A small monkey is beside him, so cute!", "Will it eat a banana?", "It resembles you, ｛Hariya＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0404211_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That's not it!\nI'm talking about the monkey boss!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404211_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, they'll probably eat it,\nright?\nIs there a place we can buy one and\ntry?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404211_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I do get the point of conquering the\ntop but...\nhow did I get stuck in it...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0404211_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "That panda is so talented.");
        Message_MsgSel("Why not make it your role model?", "They're just lying around, yet they're so cute.", "Oh, it waved!");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0404211_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Huh?\nI never want to learn from a panda!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404211_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nI know what you're trying to say.\nThey don't feel the slightest bit of\ntension.");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404211_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "They act like they don't have the\nsensitivity to care that many people\nare in front of them.\nI really envy them.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404211_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nYou're lucky to be just like them.\nSometimes, you don't have the\nsensitivity.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Hariya＊＊｝...");
                Character_ChFace(0, 0, 11);
                System_Wait(20);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404211_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Sorry.\nWhat I said just now was a slip of\nthe tongue.");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404211_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Seriously... I'm sorry.\nI really am... Still a kid...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404211_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "They look like stuffed dolls.\nIn their eyes though, it might be an\ninsult.");
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
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404211_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You're addressing that to me,\nright!?\nArgh, I should have brought a\ncamera!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
