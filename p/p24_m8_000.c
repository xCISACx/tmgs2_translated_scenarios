section "p24_m8_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(8, "M8_??F", 0);
    Background_Bg_GS2("BG_SC920_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_bunka_jyu(0) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "Welcome!");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(8, 2, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("P1408000_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Hmm? What's with this wall?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, so you've noticed.\nIf you look at it closely, it's\ndeliberately set-up that way.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Not one has been able to spot it\nyet, though.");
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("P1408000_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Seriously?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah!\n｛Masaki＊＊｝, please take a\nlook and be our first guest♪");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("P1408000_H00200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Nice! I'm going in!\nHey, try to not guide the next guest\nhere, okay?\nOh, an actual first discovery.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Masaki＊＊｝!)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(Huh?\nThere's someone at the spot where\nI'm supposed to show...)");
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("P1408000_H00300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Hey, what's up?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm...\nThere seems to be a little\nmistake...\nWell, there's over there...\nOh, and over there is no good\neither...");
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(8, 2, (#1));
        Voice_PlayVoice("P1408000_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "You～...\nYou're the clerk trainee from\nAnneri, right?\nThe manager would cry if he ever saw\nthis.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I-I'm sorry...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I blew it...)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 86, 1);
    }
